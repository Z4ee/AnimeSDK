#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_6.h"
#include "unitysdk/System/Object.h"

class Class_1_A047EA5169B6B30F;
class Class_2_F69D29AB796376C2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNOWLEDGEDATA_ADDCHILD_OFFSET UNITYSDK_OFFSET(0xDAD4040)
#define KNOWLEDGEDATA_GETCURPROGRESS_OFFSET UNITYSDK_OFFSET(0xDAD4110)
#define KNOWLEDGEDATA_GETMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0xDAD4260)
#define KNOWLEDGEDATA_GETREWARDSTATE_OFFSET UNITYSDK_OFFSET(0xDAD42C0)
#define KNOWLEDGEDATA_GETREWARDS_OFFSET UNITYSDK_OFFSET(0xDAD4200)
#define KNOWLEDGEDATA_GET_QUESTCONFIG_OFFSET UNITYSDK_OFFSET(0xDAD3FE0)
#define KNOWLEDGEDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0xDAD3FC0)
#define KNOWLEDGEDATA_GET_SERVERINFO_OFFSET UNITYSDK_OFFSET(0xDAD3C80)
#define KNOWLEDGEDATA_ISRED_OFFSET UNITYSDK_OFFSET(0xDAD4340)
#define KNOWLEDGEDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0xDAD3FD0)
#define KNOWLEDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD3FF0)

inline static constexpr unsigned int KnowledgeData_TypeDefinitionIndex = 43704;

class KnowledgeData : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KnowledgeData*>* childQuest; // 0x10
	::Class_2_F69D29AB796376C2* _QuestConfig_k__BackingField; // 0x18
	::System::Int32 _QuestID_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 configID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA__CTOR_OFFSET))(this, configID);
	}

	::Class_1_A047EA5169B6B30F* get_ServerInfo()
	{
		return ((::Class_1_A047EA5169B6B30F*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_SERVERINFO_OFFSET))(this);
	}

	::System::Int32 get_QuestID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_QUESTID_OFFSET))(this);
	}

	::System::Void set_QuestID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_SET_QUESTID_OFFSET))(this, value);
	}

	::Class_2_F69D29AB796376C2* get_QuestConfig()
	{
		return ((::Class_2_F69D29AB796376C2*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GET_QUESTCONFIG_OFFSET))(this);
	}

	::System::Void AddChild(::KnowledgeData* data)
	{
		return ((::System::Void(*)(::PVOID, ::KnowledgeData*))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_ADDCHILD_OFFSET))(this, data);
	}

	::System::Int32 GetCurProgress()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETCURPROGRESS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* GetRewards()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETREWARDS_OFFSET))(this);
	}

	::System::Int32 GetMaxProgress()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETMAXPROGRESS_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_6 GetRewardState()
	{
		return ((::Enum_3_4608E37A1B3D374A_6(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_GETREWARDSTATE_OFFSET))(this);
	}

	::System::Boolean IsRed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOWLEDGEDATA_ISRED_OFFSET))(this);
	}
};
