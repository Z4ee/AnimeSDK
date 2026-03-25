#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_487;
namespace RPG::Client { class MusicVisualization_SpectrumEffectBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FBA2F7F034B595FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A42850)
#define CLASS_1_FBA2F7F034B595FB_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x10A44230)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_1_OFFSET UNITYSDK_OFFSET(0x10A43260)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x10A43100)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3EBB8CC7CE9832B7_OFFSET UNITYSDK_OFFSET(0x10A43610)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_3F958D90D53A4400_OFFSET UNITYSDK_OFFSET(0x10A42E10)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_47A586EC7DE271D5_OFFSET UNITYSDK_OFFSET(0x10A436D0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_53F8C4706DFDC9DC_OFFSET UNITYSDK_OFFSET(0x10A42EA0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x10A42970)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x10A42920)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0x10A429C0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_84EDE99A0157AA80_OFFSET UNITYSDK_OFFSET(0x10A42F30)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x10A42D80)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10A44250)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x10A42C60)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_EDDD1B285B468C3C_OFFSET UNITYSDK_OFFSET(0x10A433C0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_F56205DA0E1D126B_OFFSET UNITYSDK_OFFSET(0x10A42B80)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_FA62BCB480AFF4EA_OFFSET UNITYSDK_OFFSET(0x10A42BD0)
#define CLASS_1_FBA2F7F034B595FB_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x10A42CF0)
#define CLASS_1_FBA2F7F034B595FB_SET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x10A44240)
#define CLASS_1_FBA2F7F034B595FB__CTOR_OFFSET UNITYSDK_OFFSET(0x10A427B0)

inline static constexpr unsigned int Class_1_FBA2F7F034B595FB_TypeDefinitionIndex = 48385;

class Class_1_FBA2F7F034B595FB : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_8 = 0x200; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_SpectrumEffectBase*>* Field_1_4; // 0x10
	::Il2CppArray<::System::Single>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_487*>* Field_1_3; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::UInt32 _PlayingID_k__BackingField; // 0x2C
	::System::Int32 Field_1_2; // 0x30
	::System::UInt32 Field_1_1; // 0x34
	::System::Single Field_1_6; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_70F996834AEFED46_OFFSET))(this, a1);
	}

	::System::Single Method_1_F56205DA0E1D126B(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_F56205DA0E1D126B_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA62BCB480AFF4EA(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_FA62BCB480AFF4EA_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F958D90D53A4400(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3F958D90D53A4400_OFFSET))(this, a1);
	}

	::System::Void Method_1_53F8C4706DFDC9DC(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_53F8C4706DFDC9DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_84EDE99A0157AA80(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_84EDE99A0157AA80_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_3B258437A86233AC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3B258437A86233AC_1_OFFSET))(this);
	}

	::System::Void Method_1_EDDD1B285B468C3C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_EDDD1B285B468C3C_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_3EBB8CC7CE9832B7()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_3EBB8CC7CE9832B7_OFFSET))(this);
	}

	::System::Void Method_1_47A586EC7DE271D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_47A586EC7DE271D5_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_GET_PLAYINGID_OFFSET))(this);
	}

	::System::Void set_PlayingID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_SET_PLAYINGID_OFFSET))(this, value);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBA2F7F034B595FB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
