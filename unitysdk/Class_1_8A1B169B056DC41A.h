#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4FE0A7F4356B7F01;
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_8A1B169B056DC41A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8C0E9C0)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_6279B2A89754B8E7_OFFSET UNITYSDK_OFFSET(0x8C0E710)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x8C0E840)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x8C0E930)
#define CLASS_1_8A1B169B056DC41A__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0EA60)

inline static constexpr unsigned int Class_1_8A1B169B056DC41A_TypeDefinitionIndex = 60451;

class Class_1_8A1B169B056DC41A : public ::System::Object
{
public:
	::UnityEngine::Texture2D* Field_1_5; // 0x10
	::UnityEngine::Material* Field_1_2; // 0x18
	::UnityEngine::Mesh* Field_1_0; // 0x20
	::UnityEngine::Material* Field_1_4; // 0x28
	::RPG::Client::CrowdAnimator::CrowdPrototype* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::Class_1_4FE0A7F4356B7F01*>* Field_1_8; // 0x38
	::System::Int32 Field_1_7; // 0x40
	::System::Int32 Field_1_6; // 0x44
	::System::Int32 Field_1_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6279B2A89754B8E7(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::RPG::Client::CrowdAnimator::CrowdPrototype* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_6279B2A89754B8E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_4FE0A7F4356B7F01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FE0A7F4356B7F01*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_4FE0A7F4356B7F01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FE0A7F4356B7F01*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
