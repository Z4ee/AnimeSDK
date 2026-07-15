#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoGenCellType.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListEnumeratorPoolMember_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_5.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_53BE720C46D20BF8;
class Class_1_B27A28B5F94F6BD2_2;
class Class_1_B27A28B5F94F6BD2_3;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AF9A1A0)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_STAGEPREFABINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF9A8C0)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STAGEPREFABINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AF9A830)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF9A920)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AF9A890)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AF9A840)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF9A160)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF999F0)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1AF9A190)
#define CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1AF9A180)

inline static constexpr unsigned int Class_1_53BE720C46D20BF8__GetStagePrefabInfoList_d__97_TypeDefinitionIndex = 10294;

class Class_1_53BE720C46D20BF8__GetStagePrefabInfoList_d__97 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::GameCore::AutoGenCellType, ::Class_1_B27A28B5F94F6BD2_2*> __7__wrap2; // 0x10
	::Struct_2_CC45B4503679E14E_5 __2__current; // 0x38
	::Class_1_53BE720C46D20BF8* __4__this; // 0x48
	::RPG::GameCore::ConfigDataPoolListEnumeratorPoolMember_1<::Class_1_B27A28B5F94F6BD2_3*> __7__wrap3; // 0x50
	::Class_1_B27A28B5F94F6BD2_3* _cell_5__5; // 0x68
	::System::Int32 __1__state; // 0x70
	::System::Int32 __3__filter; // 0x74
	::System::Int32 _i_5__2; // 0x78
	::System::Int32 __l__initialThreadId; // 0x7C
	::System::Int32 filter; // 0x80

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97___M__FINALLY2_OFFSET))(this);
	}

	::Struct_2_CC45B4503679E14E_5 System_Collections_Generic_IEnumerator_RPG_GameCore_StagePrefabInfo__get_Current()
	{
		return ((::Struct_2_CC45B4503679E14E_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STAGEPREFABINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_CC45B4503679E14E_5>* System_Collections_Generic_IEnumerable_RPG_GameCore_StagePrefabInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_CC45B4503679E14E_5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_STAGEPREFABINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53BE720C46D20BF8__GETSTAGEPREFABINFOLIST_D__97_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
