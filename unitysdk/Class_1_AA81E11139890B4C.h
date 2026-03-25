#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/NoteNotifyType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_C27C170A2F991DAF;
namespace RPG::GameCore { class NoteNotifyConfig; }

#define CLASS_1_AA81E11139890B4C_GET_NOTIFYTIME_OFFSET UNITYSDK_OFFSET(0x11359DB0)
#define CLASS_1_AA81E11139890B4C_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x11359D90)
#define CLASS_1_AA81E11139890B4C_METHOD_1_16754B72079A3F59_OFFSET UNITYSDK_OFFSET(0x11358BB0)
#define CLASS_1_AA81E11139890B4C_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11358B50)
#define CLASS_1_AA81E11139890B4C_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x11358C70)
#define CLASS_1_AA81E11139890B4C_METHOD_1_E01DEA3F4122FE8A_OFFSET UNITYSDK_OFFSET(0x11359C10)
#define CLASS_1_AA81E11139890B4C_SET_NOTIFYTIME_OFFSET UNITYSDK_OFFSET(0x11359DC0)
#define CLASS_1_AA81E11139890B4C_SET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x11359DA0)
#define CLASS_1_AA81E11139890B4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11359DD0)
#define CLASS_1_AA81E11139890B4C__CTOR_OFFSET UNITYSDK_OFFSET(0x11358B10)

inline static constexpr unsigned int Class_1_AA81E11139890B4C_TypeDefinitionIndex = 48757;

class Class_1_AA81E11139890B4C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA81E11139890B4C_TypeDefinitionIndex)->GetStaticField(0xF730);
	}
	::Class_1_C27C170A2F991DAF* Field_1_3; // 0x10
	::RPG::GameCore::NoteNotifyConfig* Field_1_2; // 0x18
	::System::Single _NotifyTime_k__BackingField; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::RPG::GameCore::NoteNotifyType _NotifyType_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_C27C170A2F991DAF* a1, ::System::Single a2, ::RPG::GameCore::NoteNotifyConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C27C170A2F991DAF*, ::System::Single, ::RPG::GameCore::NoteNotifyConfig*))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_16754B72079A3F59(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_METHOD_1_16754B72079A3F59_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_METHOD_1_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_1_E01DEA3F4122FE8A(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_METHOD_1_E01DEA3F4122FE8A_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::NoteNotifyType get_NotifyType()
	{
		return ((::RPG::GameCore::NoteNotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_NotifyType(::RPG::GameCore::NoteNotifyType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NoteNotifyType))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_SET_NOTIFYTYPE_OFFSET))(this, value);
	}

	::System::Single get_NotifyTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_GET_NOTIFYTIME_OFFSET))(this);
	}

	::System::Void set_NotifyTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AA81E11139890B4C_SET_NOTIFYTIME_OFFSET))(this, value);
	}
};
