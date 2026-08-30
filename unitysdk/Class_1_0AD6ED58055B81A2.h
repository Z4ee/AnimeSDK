#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_107413F390DDC212;
class Class_1_7ADF327B3942072B;
class Class_1_F0E9DD085BA6740E_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0AD6ED58055B81A2_GET_FUNRECORDS_OFFSET UNITYSDK_OFFSET(0x1789C9B0)
#define CLASS_1_0AD6ED58055B81A2_GET_LEVELTURN_OFFSET UNITYSDK_OFFSET(0x1789C980)
#define CLASS_1_0AD6ED58055B81A2_GET_ROUTEENDMAP_OFFSET UNITYSDK_OFFSET(0x1789C9A0)
#define CLASS_1_0AD6ED58055B81A2_METHOD_1_703299C3DD1F5B47_OFFSET UNITYSDK_OFFSET(0x1789CA70)
#define CLASS_1_0AD6ED58055B81A2_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x1789C9C0)
#define CLASS_1_0AD6ED58055B81A2_SET_LEVELTURN_OFFSET UNITYSDK_OFFSET(0x1789C990)
#define CLASS_1_0AD6ED58055B81A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1789D500)

inline static constexpr unsigned int Class_1_0AD6ED58055B81A2_TypeDefinitionIndex = 63943;

class Class_1_0AD6ED58055B81A2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* _FunRecords_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_107413F390DDC212*>* _RouteEndMap_k__BackingField; // 0x18
	::System::UInt32 _LevelTurn_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_LevelTurn()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2_GET_LEVELTURN_OFFSET))(this);
	}

	::System::Void set_LevelTurn(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2_SET_LEVELTURN_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_107413F390DDC212*>* get_RouteEndMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_107413F390DDC212*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2_GET_ROUTEENDMAP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* get_FunRecords()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2_GET_FUNRECORDS_OFFSET))(this);
	}

	::Class_1_107413F390DDC212* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_107413F390DDC212*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Void Method_1_703299C3DD1F5B47(::Class_1_F0E9DD085BA6740E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_2*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6ED58055B81A2_METHOD_1_703299C3DD1F5B47_OFFSET))(this, a1);
	}
};
