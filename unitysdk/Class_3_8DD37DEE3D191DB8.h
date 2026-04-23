#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E77EE8BE0A609DD9.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_029A7EDCBF9933C8;
class Class_1_ADBE1843AD1E672A;
class Class_3_C23B7FC6F4F7F131;
namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }

#define CLASS_3_8DD37DEE3D191DB8_GET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x99669D0)
#define CLASS_3_8DD37DEE3D191DB8_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x99669B0)
#define CLASS_3_8DD37DEE3D191DB8_METHOD_3_EBB07646C9BB0C5C_OFFSET UNITYSDK_OFFSET(0x99669F0)
#define CLASS_3_8DD37DEE3D191DB8_SET_INTERACTIONVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x99669E0)
#define CLASS_3_8DD37DEE3D191DB8_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x99669C0)
#define CLASS_3_8DD37DEE3D191DB8__CTOR_OFFSET UNITYSDK_OFFSET(0x9966890)
#define CLASS_3_8DD37DEE3D191DB8___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x9966A80)

inline static constexpr unsigned int Class_3_8DD37DEE3D191DB8_TypeDefinitionIndex = 68410;

class Class_3_8DD37DEE3D191DB8 : public ::Class_2_E77EE8BE0A609DD9
{
public:
	::Class_1_029A7EDCBF9933C8* Field_3_3; // 0x20
	::RPG::Client::MVVM::Model::LimaoNewsPostData* Field_3_2; // 0x28
	::Class_1_ADBE1843AD1E672A* _OnBtnClose_k__BackingField; // 0x30
	::Class_3_C23B7FC6F4F7F131* _InteractionViewModel_k__BackingField; // 0x38

	::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsPostData* a1, ::Class_1_029A7EDCBF9933C8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*, ::Class_1_029A7EDCBF9933C8*))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnClose()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_3_C23B7FC6F4F7F131* get_InteractionViewModel()
	{
		return ((::Class_3_C23B7FC6F4F7F131*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8_GET_INTERACTIONVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_InteractionViewModel(::Class_3_C23B7FC6F4F7F131* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C23B7FC6F4F7F131*))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8_SET_INTERACTIONVIEWMODEL_OFFSET))(this, value);
	}

	::RPG::Client::TextID Method_3_EBB07646C9BB0C5C()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8_METHOD_3_EBB07646C9BB0C5C_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DD37DEE3D191DB8___CTOR_B__0_0_OFFSET))(this);
	}
};
