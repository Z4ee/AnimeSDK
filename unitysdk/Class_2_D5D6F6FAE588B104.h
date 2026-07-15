#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_D40936EF3BF54118_19;
namespace RPG::GameCore { class EraFlipperConfig; }
namespace System { class Object; }

#define CLASS_2_D5D6F6FAE588B104_GET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x1936C140)
#define CLASS_2_D5D6F6FAE588B104_GET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x1936C160)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_2DB5DF27CD58A3B5_OFFSET UNITYSDK_OFFSET(0x1936BC10)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_2F7E7A0CBFFDFF0D_OFFSET UNITYSDK_OFFSET(0x1936C0E0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0x1936CAA0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_75A0A363E034026D_OFFSET UNITYSDK_OFFSET(0x1936BBD0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1936CA50)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x1936C5E0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x1936C7B0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x1936C900)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x1936C660)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1936C180)
#define CLASS_2_D5D6F6FAE588B104_SET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x1936C150)
#define CLASS_2_D5D6F6FAE588B104_SET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x1936C170)
#define CLASS_2_D5D6F6FAE588B104__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1936C1C0)
#define CLASS_2_D5D6F6FAE588B104__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1936C320)
#define CLASS_2_D5D6F6FAE588B104__CTOR_OFFSET UNITYSDK_OFFSET(0x1936CD70)

inline static constexpr unsigned int Class_2_D5D6F6FAE588B104_TypeDefinitionIndex = 60981;

class Class_2_D5D6F6FAE588B104 : public ::RPG::Client::BaseModule
{
public:
	::Class_1_D40936EF3BF54118_19* Field_2_0; // 0x10
	::RPG::GameCore::EraFlipperConfig* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x24
	::System::Boolean _DuringFlip_k__BackingField; // 0x28
	::System::Boolean _IsDuringCrossMap_k__BackingField; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::EraFlipperConfig* Method_2_75A0A363E034026D()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_75A0A363E034026D_OFFSET))(this);
	}

	::System::Boolean Method_2_2DB5DF27CD58A3B5(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_2DB5DF27CD58A3B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2F7E7A0CBFFDFF0D(::Class_1_D40936EF3BF54118_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_19*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_2F7E7A0CBFFDFF0D_OFFSET))(this, a1);
	}

	::System::Boolean get_DuringFlip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_GET_DURINGFLIP_OFFSET))(this);
	}

	::System::Void set_DuringFlip(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_SET_DURINGFLIP_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDuringCrossMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_GET_ISDURINGCROSSMAP_OFFSET))(this);
	}

	::System::Void set_IsDuringCrossMap(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_SET_ISDURINGCROSSMAP_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_19* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_D40936EF3BF54118_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_6096CA3BC11444EA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_6096CA3BC11444EA_OFFSET))(this, a1);
	}
};
