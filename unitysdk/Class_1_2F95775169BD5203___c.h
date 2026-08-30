#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WaveSimPanel;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2F95775169BD5203___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E4DAB0)
#define CLASS_1_2F95775169BD5203___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4DAF0)
#define CLASS_1_2F95775169BD5203___C__UPDATEVOLUME_B__161_0_OFFSET UNITYSDK_OFFSET(0x18E4DB00)

inline static constexpr unsigned int Class_1_2F95775169BD5203___c_TypeDefinitionIndex = 47958;

class Class_1_2F95775169BD5203___c : public ::System::Object
{
public:
	static ::Class_1_2F95775169BD5203___c** StaticGet___9()
	{
		return (::Class_1_2F95775169BD5203___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203___c_TypeDefinitionIndex)->GetStaticField(0x43380);
	}
	static ::System::Comparison_1<::WaveSimPanel*>** StaticGet___9__161_0()
	{
		return (::System::Comparison_1<::WaveSimPanel*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203___c_TypeDefinitionIndex)->GetStaticField(0x43388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _UpdateVolume_b__161_0(::WaveSimPanel* a1, ::WaveSimPanel* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::WaveSimPanel*, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203___C__UPDATEVOLUME_B__161_0_OFFSET))(this, a1, a2);
	}
};
