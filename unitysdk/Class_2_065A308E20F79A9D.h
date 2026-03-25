#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_E7C4009BCC22497A_14;
namespace RPG::GameCore { class EraFlipperConfig; }
namespace System { class Object; }

#define CLASS_2_065A308E20F79A9D_GET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x11484DE0)
#define CLASS_2_065A308E20F79A9D_GET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x11484E00)
#define CLASS_2_065A308E20F79A9D_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11484E20)
#define CLASS_2_065A308E20F79A9D_METHOD_2_2F61F9679BAC0084_OFFSET UNITYSDK_OFFSET(0x11484D80)
#define CLASS_2_065A308E20F79A9D_METHOD_2_75A0A363E034026D_OFFSET UNITYSDK_OFFSET(0x114849C0)
#define CLASS_2_065A308E20F79A9D_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x114854E0)
#define CLASS_2_065A308E20F79A9D_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x11485070)
#define CLASS_2_065A308E20F79A9D_METHOD_2_DC12DEBA4D57B4BF_OFFSET UNITYSDK_OFFSET(0x11484A00)
#define CLASS_2_065A308E20F79A9D_METHOD_2_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x11485240)
#define CLASS_2_065A308E20F79A9D_METHOD_2_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x11485390)
#define CLASS_2_065A308E20F79A9D_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x114850F0)
#define CLASS_2_065A308E20F79A9D_METHOD_2_FF4842B24EFFCBD6_OFFSET UNITYSDK_OFFSET(0x11485530)
#define CLASS_2_065A308E20F79A9D_SET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x11484DF0)
#define CLASS_2_065A308E20F79A9D_SET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x11484E10)
#define CLASS_2_065A308E20F79A9D__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x11484E30)
#define CLASS_2_065A308E20F79A9D__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x11484F50)
#define CLASS_2_065A308E20F79A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x114857A0)
#define CLASS_2_065A308E20F79A9D___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x114857C0)
#define CLASS_2_065A308E20F79A9D___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x11485820)

inline static constexpr unsigned int Class_2_065A308E20F79A9D_TypeDefinitionIndex = 51818;

class Class_2_065A308E20F79A9D : public ::RPG::Client::BaseModule
{
public:
	::Class_1_E7C4009BCC22497A_14* Field_2_3; // 0x10
	::RPG::GameCore::EraFlipperConfig* Field_2_2; // 0x18
	::System::UInt32 Field_2_5; // 0x20
	::System::Boolean _DuringFlip_k__BackingField; // 0x24
	::System::Boolean _IsDuringCrossMap_k__BackingField; // 0x25
	::System::UInt32 Field_2_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::EraFlipperConfig* Method_2_75A0A363E034026D()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_75A0A363E034026D_OFFSET))(this);
	}

	::System::Boolean Method_2_DC12DEBA4D57B4BF(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_DC12DEBA4D57B4BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F61F9679BAC0084(::Class_1_E7C4009BCC22497A_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_14*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_2F61F9679BAC0084_OFFSET))(this, a1);
	}

	::System::Boolean get_DuringFlip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_GET_DURINGFLIP_OFFSET))(this);
	}

	::System::Void set_DuringFlip(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_SET_DURINGFLIP_OFFSET))(this, value);
	}

	::System::Boolean get_IsDuringCrossMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_GET_ISDURINGCROSSMAP_OFFSET))(this);
	}

	::System::Void set_IsDuringCrossMap(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_SET_ISDURINGCROSSMAP_OFFSET))(this, value);
	}

	::Class_1_E7C4009BCC22497A_14* Method_2_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF4842B24EFFCBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D_METHOD_2_FF4842B24EFFCBD6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_065A308E20F79A9D___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};
