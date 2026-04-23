#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class RogueInstanceCacheManager_3; }

#define CLASS_1_ED38314B253B0150_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0xA2DF4F0)
#define CLASS_1_ED38314B253B0150_METHOD_1_0511E01F1DEE88BF_OFFSET UNITYSDK_OFFSET(0xA2DF630)
#define CLASS_1_ED38314B253B0150_METHOD_1_37AA74CF28285FA0_OFFSET UNITYSDK_OFFSET(0xA2DF5C0)
#define CLASS_1_ED38314B253B0150_METHOD_1_761BDE1139FE5F25_OFFSET UNITYSDK_OFFSET(0xA2DF520)
#define CLASS_1_ED38314B253B0150_SET_PRESETID_OFFSET UNITYSDK_OFFSET(0xA2DF500)
#define CLASS_1_ED38314B253B0150__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2DF760)
#define CLASS_1_ED38314B253B0150__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DF510)

inline static constexpr unsigned int Class_1_ED38314B253B0150_TypeDefinitionIndex = 62417;

class Class_1_ED38314B253B0150 : public ::System::Object
{
public:
	static ::RPG::Client::RogueInstanceCacheManager_3<::System::UInt32, ::System::UInt32, ::Class_1_ED38314B253B0150*>** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RogueInstanceCacheManager_3<::System::UInt32, ::System::UInt32, ::Class_1_ED38314B253B0150*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED38314B253B0150_TypeDefinitionIndex)->GetStaticField(0x6B140);
	}
	::System::UInt32 _PresetID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150__CCTOR_OFFSET))();
	}

	::System::UInt32 get_PresetID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150_GET_PRESETID_OFFSET))(this);
	}

	::System::Void set_PresetID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150_SET_PRESETID_OFFSET))(this, value);
	}

	static ::Class_1_ED38314B253B0150* Method_1_761BDE1139FE5F25(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_ED38314B253B0150*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150_METHOD_1_761BDE1139FE5F25_OFFSET))(a1, a2);
	}

	static ::Class_1_ED38314B253B0150* Method_1_37AA74CF28285FA0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_ED38314B253B0150*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150_METHOD_1_37AA74CF28285FA0_OFFSET))(a1, a2);
	}

	::System::Void Method_1_0511E01F1DEE88BF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED38314B253B0150_METHOD_1_0511E01F1DEE88BF_OFFSET))(this, a1, a2);
	}
};
