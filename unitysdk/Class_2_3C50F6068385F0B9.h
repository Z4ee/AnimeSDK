#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class CartoonScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_3C50F6068385F0B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105E9150)
#define CLASS_2_3C50F6068385F0B9_METHOD_2_C07E028BD9FFE38A_OFFSET UNITYSDK_OFFSET(0x105E9690)
#define CLASS_2_3C50F6068385F0B9_METHOD_2_C7D596A81C8A10AA_OFFSET UNITYSDK_OFFSET(0x105E93E0)
#define CLASS_2_3C50F6068385F0B9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105E97E0)
#define CLASS_2_3C50F6068385F0B9_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x105E91D0)
#define CLASS_2_3C50F6068385F0B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105E9290)
#define CLASS_2_3C50F6068385F0B9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105E9790)
#define CLASS_2_3C50F6068385F0B9_TICK_OFFSET UNITYSDK_OFFSET(0x105E9230)
#define CLASS_2_3C50F6068385F0B9__CTOR_OFFSET UNITYSDK_OFFSET(0x105E9140)

inline static constexpr unsigned int Class_2_3C50F6068385F0B9_TypeDefinitionIndex = 46773;

class Class_2_3C50F6068385F0B9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::CameraBlendCurve* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_3; // 0x20
	::RPG::GameCore::CartoonScreenTransfer* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CartoonScreenTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CartoonScreenTransfer*))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_C7D596A81C8A10AA()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_METHOD_2_C7D596A81C8A10AA_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_C07E028BD9FFE38A()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_METHOD_2_C07E028BD9FFE38A_OFFSET))(this);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C50F6068385F0B9_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}
};
