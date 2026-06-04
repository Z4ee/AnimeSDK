#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A7849E5CC498A4A.h"
#include "unitysdk/System/Object.h"

class Class_1_414BCDCDAD47B487;
class Class_1_F756B10AB29D1235;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AB4992E97715BEED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7D15A0)
#define CLASS_1_AB4992E97715BEED_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA7D0D00)
#define CLASS_1_AB4992E97715BEED_METHOD_1_4FFFF6F96B26E95A_OFFSET UNITYSDK_OFFSET(0xA7D0790)
#define CLASS_1_AB4992E97715BEED_METHOD_1_503CD42A0C349327_1_OFFSET UNITYSDK_OFFSET(0xA7D14F0)
#define CLASS_1_AB4992E97715BEED_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0xA7D1440)
#define CLASS_1_AB4992E97715BEED_METHOD_1_627D204E7CA1E169_OFFSET UNITYSDK_OFFSET(0xA7CFFF0)
#define CLASS_1_AB4992E97715BEED_METHOD_1_A88A8CE3C4D9FCDC_OFFSET UNITYSDK_OFFSET(0xA7D08E0)
#define CLASS_1_AB4992E97715BEED_METHOD_1_AD7A7D7B9349C14B_OFFSET UNITYSDK_OFFSET(0xA7D0E20)
#define CLASS_1_AB4992E97715BEED_METHOD_1_D56133F35B0B69B9_OFFSET UNITYSDK_OFFSET(0xA7D12A0)
#define CLASS_1_AB4992E97715BEED_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0xA7D0D60)
#define CLASS_1_AB4992E97715BEED_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA7D05F0)
#define CLASS_1_AB4992E97715BEED_METHOD_1_FEC0F04DABB2F5BB_OFFSET UNITYSDK_OFFSET(0xA7D0FA0)
#define CLASS_1_AB4992E97715BEED__CTOR_OFFSET UNITYSDK_OFFSET(0xA7CFE00)

inline static constexpr unsigned int Class_1_AB4992E97715BEED_TypeDefinitionIndex = 68925;

class Class_1_AB4992E97715BEED : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* Field_1_0; // 0x10
	::RPG::GameCore::StageLodMapConfig* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F756B10AB29D1235*>* Field_1_3; // 0x28
	::RPG::GameCore::StageLodMapConfig* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NormDistanceLodTemplate*>* Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor(::RPG::GameCore::StageLodMapConfig* a1, ::RPG::GameCore::StageLodMapConfig* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageLodMapConfig*, ::RPG::GameCore::StageLodMapConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_627D204E7CA1E169(::RPG::GameCore::LodConfig* a1, ::RPG::GameCore::LodConfig* a2, ::RPG::GameCore::LodConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_627D204E7CA1E169_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A88A8CE3C4D9FCDC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_A88A8CE3C4D9FCDC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FFFF6F96B26E95A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_4FFFF6F96B26E95A_OFFSET))(this);
	}

	::Class_1_414BCDCDAD47B487* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::String* Method_1_AD7A7D7B9349C14B(::Struct_2_1A7849E5CC498A4A a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_1A7849E5CC498A4A))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_AD7A7D7B9349C14B_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_FEC0F04DABB2F5BB(::Struct_2_1A7849E5CC498A4A a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::Struct_2_1A7849E5CC498A4A))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_FEC0F04DABB2F5BB_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_D56133F35B0B69B9(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_D56133F35B0B69B9_OFFSET))(this, a1, a2);
	}

	::Class_1_414BCDCDAD47B487* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_503CD42A0C349327_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_503CD42A0C349327_1(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_503CD42A0C349327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4992E97715BEED_DISPOSE_OFFSET))(this);
	}
};
