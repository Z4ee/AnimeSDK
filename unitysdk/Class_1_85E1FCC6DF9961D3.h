#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_2BF3DCBD364A6BA8.h"
#include "unitysdk/Struct_2_793645F2F9C6AFE4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

class Class_1_3A8CBD6A2FB912AF;
class Class_1_AB394946F84AC2D3;
class Class_2_6131ABC6B1EC5318;
namespace Foundation { class NativeMemory; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFrontCameraControlAnimationConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class Action; }
namespace UnityEngine { class Animator; }
template <typename T> class Class_0_16E4307DCC419505_655;

#define CLASS_1_85E1FCC6DF9961D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105ABF00)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x105AD400)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_25478965FC59BFC4_OFFSET UNITYSDK_OFFSET(0x105AC320)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_304C5330624F30D1_OFFSET UNITYSDK_OFFSET(0x105ACF60)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x105AD190)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x105AD460)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_790CCDFF79165243_OFFSET UNITYSDK_OFFSET(0x105AD1D0)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x105AD2C0)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_A695305640C753D7_OFFSET UNITYSDK_OFFSET(0x105AD620)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_C54EB3F2B17FFBD7_OFFSET UNITYSDK_OFFSET(0x105ACE20)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_D1E2CAB28D79B426_OFFSET UNITYSDK_OFFSET(0x105AD490)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_DED5F4C96AEFB2EA_OFFSET UNITYSDK_OFFSET(0x105ACBE0)
#define CLASS_1_85E1FCC6DF9961D3_METHOD_1_EA8F137281651D0E_OFFSET UNITYSDK_OFFSET(0x105ABF50)
#define CLASS_1_85E1FCC6DF9961D3__CTOR_OFFSET UNITYSDK_OFFSET(0x105AAEA0)

inline static constexpr unsigned int Class_1_85E1FCC6DF9961D3_TypeDefinitionIndex = 65775;

class Class_1_85E1FCC6DF9961D3 : public ::System::Object
{
public:
	::System::Action* Field_1_11; // 0x10
	::Foundation::NativeMemory* Field_1_6; // 0x18
	::Class_1_AB394946F84AC2D3* Field_1_3; // 0x20
	::Foundation::Clamped_1<::System::Single> Field_1_7; // 0x28
	::Class_1_3A8CBD6A2FB912AF* Field_1_4; // 0x40
	::System::Single Field_1_8; // 0x48
	::System::Boolean Field_1_0; // 0x4C
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Field_1_9; // 0x50
	::UnityEngine::Playables::PlayableGraph Field_1_1; // 0x60
	::Struct_2_2BF3DCBD364A6BA8 Field_1_10; // 0x70
	::Struct_2_793645F2F9C6AFE4 Field_1_5; // 0xA0
	::Foundation::NativeVariable_1<::System::Single> Field_1_2; // 0xB8

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EA8F137281651D0E(::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*> a1, ::UnityEngine::Animations::AnimationScriptPlayable a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*>, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_EA8F137281651D0E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_25478965FC59BFC4(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_25478965FC59BFC4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DED5F4C96AEFB2EA(::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*>))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_DED5F4C96AEFB2EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C54EB3F2B17FFBD7(::Class_0_16E4307DCC419505_655<::Class_1_85E1FCC6DF9961D3*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_655<::Class_1_85E1FCC6DF9961D3*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_C54EB3F2B17FFBD7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_304C5330624F30D1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_304C5330624F30D1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_790CCDFF79165243(::Class_0_16E4307DCC419505_655<::Class_1_85E1FCC6DF9961D3*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_655<::Class_1_85E1FCC6DF9961D3*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_790CCDFF79165243_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_1_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_64F3965CE4C4DB47_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform Method_1_D1E2CAB28D79B426()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_D1E2CAB28D79B426_OFFSET))(this);
	}

	::System::Void Method_1_A695305640C753D7(::Class_1_AB394946F84AC2D3* a1, ::Class_1_3A8CBD6A2FB912AF* a2, ::Foundation::NativeVariable_1<::System::Single> a3, ::Struct_2_2BF3DCBD364A6BA8 a4, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> a5, ::Struct_2_793645F2F9C6AFE4 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB394946F84AC2D3*, ::Class_1_3A8CBD6A2FB912AF*, ::Foundation::NativeVariable_1<::System::Single>, ::Struct_2_2BF3DCBD364A6BA8, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Struct_2_793645F2F9C6AFE4))((::PBYTE)hIl2Cpp + CLASS_1_85E1FCC6DF9961D3_METHOD_1_A695305640C753D7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
