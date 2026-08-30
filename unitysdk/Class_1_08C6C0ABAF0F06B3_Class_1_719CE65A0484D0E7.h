#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelPedestrianFlowInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_08C6C0ABAF0F06B3_CLASS_1_719CE65A0484D0E7_METHOD_1_3FDDEF2E683D2BCD_OFFSET UNITYSDK_OFFSET(0x16413EE0)
#define CLASS_1_08C6C0ABAF0F06B3_CLASS_1_719CE65A0484D0E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16413DB0)

inline static constexpr unsigned int Class_1_08C6C0ABAF0F06B3_Class_1_719CE65A0484D0E7_TypeDefinitionIndex = 69189;

class Class_1_08C6C0ABAF0F06B3_Class_1_719CE65A0484D0E7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>* PBPGMKIDFHP; // 0x10
	::Il2CppArray<::System::Single>* HFKCJMOBDNC; // 0x18
	::System::Int32 INMOAMLBMPI; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelPedestrianFlowInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_08C6C0ABAF0F06B3_CLASS_1_719CE65A0484D0E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3FDDEF2E683D2BCD(::RPG::GameCore::LevelPedestrianFlowInfo*& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelPedestrianFlowInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_08C6C0ABAF0F06B3_CLASS_1_719CE65A0484D0E7_METHOD_1_3FDDEF2E683D2BCD_OFFSET))(this, a1);
	}
};
