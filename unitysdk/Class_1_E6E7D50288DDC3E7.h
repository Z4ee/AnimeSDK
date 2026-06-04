#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_588;
namespace RPG::Client { class MusicVisualization_SpectrumEffectBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6E7D50288DDC3E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C941A0)
#define CLASS_1_E6E7D50288DDC3E7_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x10C96000)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_0F93CE7409987429_OFFSET UNITYSDK_OFFSET(0x10C94A90)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_3EBB8CC7CE9832B7_OFFSET UNITYSDK_OFFSET(0x10C95350)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_413C7EFF7A1D207C_OFFSET UNITYSDK_OFFSET(0x10C94930)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_46086E8B47AC77A0_OFFSET UNITYSDK_OFFSET(0x10C946C0)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_46C0FB33FA0C262F_OFFSET UNITYSDK_OFFSET(0x10C94350)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_59E2538CF2D1A0AC_OFFSET UNITYSDK_OFFSET(0x10C950C0)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x10C94300)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x10C942B0)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_7E1BADD1D133FA1C_1_OFFSET UNITYSDK_OFFSET(0x10C94F30)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x10C94DA0)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_B454A31C7AC848CE_OFFSET UNITYSDK_OFFSET(0x10C95410)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_C50DACF0094EAAC5_OFFSET UNITYSDK_OFFSET(0x10C94820)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10C96020)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x10C94630)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_E1901823EC3735F3_OFFSET UNITYSDK_OFFSET(0x10C94BA0)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_F56205DA0E1D126B_OFFSET UNITYSDK_OFFSET(0x10C94550)
#define CLASS_1_E6E7D50288DDC3E7_METHOD_1_FA62BCB480AFF4EA_OFFSET UNITYSDK_OFFSET(0x10C945A0)
#define CLASS_1_E6E7D50288DDC3E7_SET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x10C96010)
#define CLASS_1_E6E7D50288DDC3E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10C940F0)

inline static constexpr unsigned int Class_1_E6E7D50288DDC3E7_TypeDefinitionIndex = 55867;

class Class_1_E6E7D50288DDC3E7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x200; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_SpectrumEffectBase*>* Field_1_1; // 0x10
	::Il2CppArray<::System::Single>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_588*>* Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x28
	::System::UInt32 _PlayingID_k__BackingField; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::System::UInt32 Field_1_8; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_46C0FB33FA0C262F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_46C0FB33FA0C262F_OFFSET))(this, a1);
	}

	::System::Single Method_1_F56205DA0E1D126B(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_F56205DA0E1D126B_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA62BCB480AFF4EA(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_FA62BCB480AFF4EA_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_46086E8B47AC77A0(::Class_0_16E4307DCC419505_588* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_588*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_46086E8B47AC77A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50DACF0094EAAC5(::Class_0_16E4307DCC419505_588* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_588*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_C50DACF0094EAAC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_413C7EFF7A1D207C(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_413C7EFF7A1D207C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F93CE7409987429(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_0F93CE7409987429_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1901823EC3735F3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_E1901823EC3735F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_1_7E1BADD1D133FA1C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_7E1BADD1D133FA1C_1_OFFSET))(this);
	}

	::System::Void Method_1_59E2538CF2D1A0AC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_59E2538CF2D1A0AC_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_3EBB8CC7CE9832B7()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_3EBB8CC7CE9832B7_OFFSET))(this);
	}

	::System::Void Method_1_B454A31C7AC848CE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_B454A31C7AC848CE_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_GET_PLAYINGID_OFFSET))(this);
	}

	::System::Void set_PlayingID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_SET_PLAYINGID_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7D50288DDC3E7_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
