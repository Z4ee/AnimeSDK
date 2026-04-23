#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WaveSimPanel;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2F95775169BD5203___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x995D2A0)
#define CLASS_1_2F95775169BD5203___C__CTOR_OFFSET UNITYSDK_OFFSET(0x995D2E0)
#define CLASS_1_2F95775169BD5203___C__UPDATEVOLUME_B__161_0_OFFSET UNITYSDK_OFFSET(0x995D2F0)

inline static constexpr unsigned int Class_1_2F95775169BD5203___c_TypeDefinitionIndex = 44244;

class Class_1_2F95775169BD5203___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::WaveSimPanel*>** StaticGet___9__161_0()
	{
		return (::System::Comparison_1<::WaveSimPanel*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203___c_TypeDefinitionIndex)->GetStaticField(0x18940);
	}
	static ::Class_1_2F95775169BD5203___c** StaticGet___9()
	{
		return (::Class_1_2F95775169BD5203___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203___c_TypeDefinitionIndex)->GetStaticField(0x18948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _UpdateVolume_b__161_0(::WaveSimPanel* i0, ::WaveSimPanel* I1)
	{
		return ((::System::Int32(*)(::PVOID, ::WaveSimPanel*, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203___C__UPDATEVOLUME_B__161_0_OFFSET))(this, i0, I1);
	}
};
