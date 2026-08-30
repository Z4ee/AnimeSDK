#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_D40936EF3BF54118_20;
namespace RPG::GameCore { class EraFlipperConfig; }
namespace System { class Object; }

#define CLASS_2_D5D6F6FAE588B104_GET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x1A8D1E20)
#define CLASS_2_D5D6F6FAE588B104_GET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x1A8D1E40)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_2DB5DF27CD58A3B5_OFFSET UNITYSDK_OFFSET(0x1A8D18F0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_2F7E7A0CBFFDFF0D_OFFSET UNITYSDK_OFFSET(0x1A8D1DC0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0x1A8D2780)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_75A0A363E034026D_OFFSET UNITYSDK_OFFSET(0x1A8D18B0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1A8D2730)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x1A8D22C0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x1A8D2490)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x1A8D25E0)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x1A8D2340)
#define CLASS_2_D5D6F6FAE588B104_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1A8D1E60)
#define CLASS_2_D5D6F6FAE588B104_SET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x1A8D1E30)
#define CLASS_2_D5D6F6FAE588B104_SET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x1A8D1E50)
#define CLASS_2_D5D6F6FAE588B104__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A8D1EA0)
#define CLASS_2_D5D6F6FAE588B104__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A8D2000)
#define CLASS_2_D5D6F6FAE588B104__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D2A20)

inline static constexpr unsigned int Class_2_D5D6F6FAE588B104_TypeDefinitionIndex = 63834;

class Class_2_D5D6F6FAE588B104 : public ::RPG::Client::BaseModule
{
public:
	::RPG::GameCore::EraFlipperConfig* NKMLNFMMKGE; // 0x10
	::Class_1_D40936EF3BF54118_20* HJEFLHDFJHI; // 0x18
	::System::UInt32 MEPJNICGFBJ; // 0x20
	::System::Boolean _IsDuringCrossMap_k__BackingField; // 0x24
	::System::Boolean _DuringFlip_k__BackingField; // 0x25
	::System::UInt32 CFKDKLCFPEE; // 0x28

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

	::System::Void Method_2_2F7E7A0CBFFDFF0D(::Class_1_D40936EF3BF54118_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_20*))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_2F7E7A0CBFFDFF0D_OFFSET))(this, a1);
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

	::Class_1_D40936EF3BF54118_20* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_D40936EF3BF54118_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5D6F6FAE588B104_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
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
