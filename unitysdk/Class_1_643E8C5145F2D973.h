#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5C3804B21DF947F4;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_1_643E8C5145F2D973_CLEAR_OFFSET UNITYSDK_OFFSET(0x117B5940)
#define CLASS_1_643E8C5145F2D973_METHOD_1_021D359A6B27D7E9_OFFSET UNITYSDK_OFFSET(0x117B59E0)
#define CLASS_1_643E8C5145F2D973_METHOD_1_14458B78C43EB27B_OFFSET UNITYSDK_OFFSET(0x117B5890)
#define CLASS_1_643E8C5145F2D973_METHOD_1_224CE5D244AB2F7C_OFFSET UNITYSDK_OFFSET(0x117B5B40)
#define CLASS_1_643E8C5145F2D973_METHOD_1_2266060C1EDA6636_OFFSET UNITYSDK_OFFSET(0x117B5D80)
#define CLASS_1_643E8C5145F2D973_METHOD_1_36E47868EF373D40_OFFSET UNITYSDK_OFFSET(0x117B5A60)
#define CLASS_1_643E8C5145F2D973_METHOD_1_9FF25618E0E9BEC3_OFFSET UNITYSDK_OFFSET(0x117B5E30)
#define CLASS_1_643E8C5145F2D973_METHOD_1_AD51F82E38D39A74_OFFSET UNITYSDK_OFFSET(0x117B5C10)
#define CLASS_1_643E8C5145F2D973_METHOD_1_B2B45A0FDF809296_OFFSET UNITYSDK_OFFSET(0x117B5AD0)
#define CLASS_1_643E8C5145F2D973_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117B5820)
#define CLASS_1_643E8C5145F2D973__CCTOR_OFFSET UNITYSDK_OFFSET(0x117B62E0)
#define CLASS_1_643E8C5145F2D973__CTOR_OFFSET UNITYSDK_OFFSET(0x117B62D0)

inline static constexpr unsigned int Class_1_643E8C5145F2D973_TypeDefinitionIndex = 62963;

class Class_1_643E8C5145F2D973 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_643E8C5145F2D973_TypeDefinitionIndex)->GetStaticField(0x1CFD0);
	}
	::RPG::Client::MonoEmoPlayableGraph* Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_6; // 0x18
	::UnityEngine::Vector2 Field_1_7; // 0x20
	::UnityEngine::Vector2 Field_1_8; // 0x28
	::UnityEngine::Vector2 Field_1_5; // 0x30
	::System::Boolean Field_1_1; // 0x38
	::System::Boolean Field_1_3; // 0x39
	::System::Boolean Field_1_4; // 0x3A
	::System::Boolean Field_1_2; // 0x3B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_14458B78C43EB27B(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_14458B78C43EB27B_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_021D359A6B27D7E9(::RPG::Client::MonoEmoPlayableGraph* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_021D359A6B27D7E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_36E47868EF373D40(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_36E47868EF373D40_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2B45A0FDF809296(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_B2B45A0FDF809296_OFFSET))(this, a1);
	}

	::UnityEngine::Playables::PlayableGraph Method_1_224CE5D244AB2F7C()
	{
		return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_224CE5D244AB2F7C_OFFSET))(this);
	}

	::System::Boolean Method_1_AD51F82E38D39A74(::Class_1_5C3804B21DF947F4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5C3804B21DF947F4*))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_AD51F82E38D39A74_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2266060C1EDA6636(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Bounds& a2, ::Class_1_5C3804B21DF947F4* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Bounds&, ::Class_1_5C3804B21DF947F4*))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_2266060C1EDA6636_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_9FF25618E0E9BEC3(::UnityEngine::Bounds& a1, ::Class_1_5C3804B21DF947F4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&, ::Class_1_5C3804B21DF947F4*))((::PBYTE)hIl2Cpp + CLASS_1_643E8C5145F2D973_METHOD_1_9FF25618E0E9BEC3_OFFSET))(this, a1, a2);
	}
};
