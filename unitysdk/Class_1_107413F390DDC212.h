#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F29182263AEF4E21_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_107413F390DDC212_GET_BATTLEENDROUND_OFFSET UNITYSDK_OFFSET(0x1580AFC0)
#define CLASS_1_107413F390DDC212_GET_DEADAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1580AFA0)
#define CLASS_1_107413F390DDC212_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1580AF60)
#define CLASS_1_107413F390DDC212_GET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x1580AF80)
#define CLASS_1_107413F390DDC212_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1580AF40)
#define CLASS_1_107413F390DDC212_METHOD_1_7D932F1022BCD845_OFFSET UNITYSDK_OFFSET(0x1580AFE0)
#define CLASS_1_107413F390DDC212_SET_BATTLEENDROUND_OFFSET UNITYSDK_OFFSET(0x1580AFD0)
#define CLASS_1_107413F390DDC212_SET_DEADAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1580AFB0)
#define CLASS_1_107413F390DDC212_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1580AF70)
#define CLASS_1_107413F390DDC212_SET_PROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x1580AF90)
#define CLASS_1_107413F390DDC212_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1580AF50)
#define CLASS_1_107413F390DDC212__CTOR_OFFSET UNITYSDK_OFFSET(0x1580B0A0)

inline static constexpr unsigned int Class_1_107413F390DDC212_TypeDefinitionIndex = 63944;

class Class_1_107413F390DDC212 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _DeadAvatarIdList_k__BackingField; // 0x10
	::System::UInt32 _BattleEndRound_k__BackingField; // 0x18
	::System::UInt32 _RouteID_k__BackingField; // 0x1C
	::System::UInt32 _ProgressPercent_k__BackingField; // 0x20
	::System::Boolean _IsWin_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_RouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_GET_ROUTEID_OFFSET))(this);
	}

	::System::Void set_RouteID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_SET_ROUTEID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_GET_ISWIN_OFFSET))(this);
	}

	::System::Void set_IsWin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_SET_ISWIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_ProgressPercent()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_GET_PROGRESSPERCENT_OFFSET))(this);
	}

	::System::Void set_ProgressPercent(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_SET_PROGRESSPERCENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_DeadAvatarIdList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_GET_DEADAVATARIDLIST_OFFSET))(this);
	}

	::System::Void set_DeadAvatarIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_SET_DEADAVATARIDLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_BattleEndRound()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_GET_BATTLEENDROUND_OFFSET))(this);
	}

	::System::Void set_BattleEndRound(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_SET_BATTLEENDROUND_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D932F1022BCD845(::Class_1_F29182263AEF4E21_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F29182263AEF4E21_2*))((::PBYTE)hIl2Cpp + CLASS_1_107413F390DDC212_METHOD_1_7D932F1022BCD845_OFFSET))(this, a1);
	}
};
