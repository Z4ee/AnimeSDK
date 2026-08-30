#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_491A4BA07B0FADFF_WaitState.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphWaitIdentifyFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_491A4BA07B0FADFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164031F0)
#define CLASS_3_491A4BA07B0FADFF_METHOD_3_3160EACC8F1729F2_OFFSET UNITYSDK_OFFSET(0x164038B0)
#define CLASS_3_491A4BA07B0FADFF_METHOD_3_6240D6A70F158712_OFFSET UNITYSDK_OFFSET(0x16403CA0)
#define CLASS_3_491A4BA07B0FADFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16403540)
#define CLASS_3_491A4BA07B0FADFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16402FD0)

inline static constexpr unsigned int Class_3_491A4BA07B0FADFF_TypeDefinitionIndex = 53353;

class Class_3_491A4BA07B0FADFF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PhotoGraphWaitIdentifyFinish*>
{
public:
	::Class_3_07C3C4D2990C49EE* PFNGAOGCGHH; // 0x28
	::Class_3_07C3C4D2990C49EE* LPEMKIEPOLK; // 0x30
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* HOBJAEBEIBK; // 0x38
	::Class_3_07C3C4D2990C49EE* KHCFHOHBBIA; // 0x40
	::System::UInt32 CAJHBEBFDKD; // 0x48
	::System::Boolean HDLKFIMOEGJ; // 0x4C
	::Class_3_491A4BA07B0FADFF_WaitState FFHNGPLFNHI; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_3160EACC8F1729F2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_METHOD_3_3160EACC8F1729F2_OFFSET))(this, a1);
	}

	::System::Void Method_3_6240D6A70F158712(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_491A4BA07B0FADFF_METHOD_3_6240D6A70F158712_OFFSET))(this, a1);
	}
};
