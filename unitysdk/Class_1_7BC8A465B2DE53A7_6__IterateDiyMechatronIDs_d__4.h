#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_B472E603E751534B;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE2356A0)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE235910)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE235880)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE235980)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE2358E0)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE235890)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE235670)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xE235650)
#define CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE235690)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_6__IterateDiyMechatronIDs_d__4_TypeDefinitionIndex = 80123;

class Class_1_7BC8A465B2DE53A7_6__IterateDiyMechatronIDs_d__4 : public ::System::Object
{
public:
	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_B472E603E751534B*> _iter_5__2; // 0x10
	::System::UInt32 __2__current; // 0x50
	::System::Int32 __1__state; // 0x54
	::System::Int32 __l__initialThreadId; // 0x58

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4___M__FINALLY1_OFFSET))(this);
	}

	::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_6__ITERATEDIYMECHATRONIDS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
