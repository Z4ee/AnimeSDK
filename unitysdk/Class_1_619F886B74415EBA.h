#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/NoteNotifyType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_422F2D395BEF4FA5;
namespace RPG::GameCore { class NoteNotifyConfig; }

#define CLASS_1_619F886B74415EBA_GET_NOTIFYTIME_OFFSET UNITYSDK_OFFSET(0x14277590)
#define CLASS_1_619F886B74415EBA_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x14277570)
#define CLASS_1_619F886B74415EBA_METHOD_1_16754B72079A3F59_OFFSET UNITYSDK_OFFSET(0x14276340)
#define CLASS_1_619F886B74415EBA_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x142762E0)
#define CLASS_1_619F886B74415EBA_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x14276400)
#define CLASS_1_619F886B74415EBA_METHOD_1_B764F68C0CC10993_OFFSET UNITYSDK_OFFSET(0x142773F0)
#define CLASS_1_619F886B74415EBA_SET_NOTIFYTIME_OFFSET UNITYSDK_OFFSET(0x142775A0)
#define CLASS_1_619F886B74415EBA_SET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x14277580)
#define CLASS_1_619F886B74415EBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x142775B0)
#define CLASS_1_619F886B74415EBA__CTOR_OFFSET UNITYSDK_OFFSET(0x142762A0)

inline static constexpr unsigned int Class_1_619F886B74415EBA_TypeDefinitionIndex = 57496;

class Class_1_619F886B74415EBA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_619F886B74415EBA_TypeDefinitionIndex)->GetStaticField(0x8450);
	}
	::RPG::GameCore::NoteNotifyConfig* Field_1_1; // 0x10
	::Class_1_422F2D395BEF4FA5* Field_1_2; // 0x18
	::RPG::GameCore::NoteNotifyType _NotifyType_k__BackingField; // 0x20
	::System::Single _NotifyTime_k__BackingField; // 0x24
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor(::Class_1_422F2D395BEF4FA5* a1, ::System::Single a2, ::RPG::GameCore::NoteNotifyConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_422F2D395BEF4FA5*, ::System::Single, ::RPG::GameCore::NoteNotifyConfig*))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16754B72079A3F59(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_METHOD_1_16754B72079A3F59_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_METHOD_1_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_1_B764F68C0CC10993(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_METHOD_1_B764F68C0CC10993_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NoteNotifyType get_NotifyType()
	{
		return ((::RPG::GameCore::NoteNotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_NotifyType(::RPG::GameCore::NoteNotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NoteNotifyType))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_SET_NOTIFYTYPE_OFFSET))(this, a1);
	}

	::System::Single get_NotifyTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_GET_NOTIFYTIME_OFFSET))(this);
	}

	::System::Void set_NotifyTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_619F886B74415EBA_SET_NOTIFYTIME_OFFSET))(this, a1);
	}
};
