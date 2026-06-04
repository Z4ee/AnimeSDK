#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DA16F6EFFF969A86;
class Class_3_CD04D3296DF4C842_13;
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_7C47734FE9B6C258_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139B7810)
#define CLASS_1_7C47734FE9B6C258_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x139B8F30)
#define CLASS_1_7C47734FE9B6C258_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x139B8F40)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x139B7D00)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x139B8A60)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x139B7D60)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x139B8A10)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_6A5C5217AEC4B770_OFFSET UNITYSDK_OFFSET(0x139B78B0)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x139B7E10)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_93220B0E3A54D36B_OFFSET UNITYSDK_OFFSET(0x139B8310)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x139B7930)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x139B8F20)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_F2C8A9D880BBBF6E_OFFSET UNITYSDK_OFFSET(0x139B7BB0)
#define CLASS_1_7C47734FE9B6C258_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x139B8160)
#define CLASS_1_7C47734FE9B6C258_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x139B8C50)
#define CLASS_1_7C47734FE9B6C258_SET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x139B8F50)
#define CLASS_1_7C47734FE9B6C258__CCTOR_OFFSET UNITYSDK_OFFSET(0x139B8F60)
#define CLASS_1_7C47734FE9B6C258__CTOR_OFFSET UNITYSDK_OFFSET(0x139B7800)

inline static constexpr unsigned int Class_1_7C47734FE9B6C258_TypeDefinitionIndex = 73215;

class Class_1_7C47734FE9B6C258 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C47734FE9B6C258_TypeDefinitionIndex)->GetStaticField(0x13D50);
	}
	::Class_3_CD04D3296DF4C842_13* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* Field_1_3; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x28
	::Struct_2_2B16FFFF87B43037 Field_1_5; // 0x30
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x4C
	::System::Boolean Field_1_9; // 0x4D
	::UnityEngine::Vector3 Field_1_10; // 0x50

	::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6A5C5217AEC4B770(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_6A5C5217AEC4B770_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_E3ADA5CA2C064E44_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93220B0E3A54D36B(::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* a1, ::Class_3_CD04D3296DF4C842_13* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>*, ::Class_3_CD04D3296DF4C842_13*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_93220B0E3A54D36B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_5739CCCE693D1FCB_OFFSET))(this);
	}

	::System::Boolean Method_1_F2C8A9D880BBBF6E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_F2C8A9D880BBBF6E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void set_EnableAnimatorMoveCallback(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C47734FE9B6C258_SET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this, a1);
	}
};
