#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0AD6ED58055B81A2;
class Class_1_F0E9DD085BA6740E_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8494E43D47731C4_GET_LEVELENDMAP_OFFSET UNITYSDK_OFFSET(0xB953810)
#define CLASS_1_B8494E43D47731C4_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xB9537F0)
#define CLASS_1_B8494E43D47731C4_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0xB953830)
#define CLASS_1_B8494E43D47731C4_METHOD_1_D412299C9712C6CA_OFFSET UNITYSDK_OFFSET(0xB9538E0)
#define CLASS_1_B8494E43D47731C4_SET_LEVELENDMAP_OFFSET UNITYSDK_OFFSET(0xB953820)
#define CLASS_1_B8494E43D47731C4_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xB953800)
#define CLASS_1_B8494E43D47731C4__CTOR_OFFSET UNITYSDK_OFFSET(0xB953A80)

inline static constexpr unsigned int Class_1_B8494E43D47731C4_TypeDefinitionIndex = 63878;

class Class_1_B8494E43D47731C4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0AD6ED58055B81A2*>* _LevelEndMap_k__BackingField; // 0x10
	::System::UInt32 _MapID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MapID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4_GET_MAPID_OFFSET))(this);
	}

	::System::Void set_MapID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4_SET_MAPID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0AD6ED58055B81A2*>* get_LevelEndMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0AD6ED58055B81A2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4_GET_LEVELENDMAP_OFFSET))(this);
	}

	::System::Void set_LevelEndMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0AD6ED58055B81A2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0AD6ED58055B81A2*>*))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4_SET_LEVELENDMAP_OFFSET))(this, a1);
	}

	::Class_1_0AD6ED58055B81A2* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_0AD6ED58055B81A2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Void Method_1_D412299C9712C6CA(::Class_1_F0E9DD085BA6740E_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_2*))((::PBYTE)hIl2Cpp + CLASS_1_B8494E43D47731C4_METHOD_1_D412299C9712C6CA_OFFSET))(this, a1);
	}
};
