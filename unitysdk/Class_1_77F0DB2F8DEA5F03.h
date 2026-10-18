#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_051588381C7B7C7A_OFFSET UNITYSDK_OFFSET(0xB688DD0)
#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5062E1960794E3D1_OFFSET UNITYSDK_OFFSET(0xB688F80)
#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0xB688B60)
#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5CEC4607322705E5_2_OFFSET UNITYSDK_OFFSET(0xB689130)
#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xB688B10)
#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_9CEF1983DA5C5065_OFFSET UNITYSDK_OFFSET(0xB688EE0)
#define CLASS_1_77F0DB2F8DEA5F03_METHOD_1_F862D9CA35780A71_OFFSET UNITYSDK_OFFSET(0xB688BB0)
#define CLASS_1_77F0DB2F8DEA5F03__CTOR_OFFSET UNITYSDK_OFFSET(0xB689180)

inline static constexpr unsigned int Class_1_77F0DB2F8DEA5F03_TypeDefinitionIndex = 68255;

class Class_1_77F0DB2F8DEA5F03 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5CEC4607322705E5_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_F862D9CA35780A71()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_F862D9CA35780A71_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_051588381C7B7C7A()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_051588381C7B7C7A_OFFSET))(this);
	}

	::RPG::Client::QuestData* Method_1_9CEF1983DA5C5065(::System::UInt32 a1)
	{
		return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_9CEF1983DA5C5065_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* Method_1_5062E1960794E3D1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5062E1960794E3D1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F0DB2F8DEA5F03_METHOD_1_5CEC4607322705E5_2_OFFSET))(this);
	}
};
