#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_NotifySpecialEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7133B806F008F161_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18220650)
#define CLASS_3_7133B806F008F161_METHOD_3_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0x18220490)
#define CLASS_3_7133B806F008F161_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x182205E0)
#define CLASS_3_7133B806F008F161_METHOD_3_6C730A209B06CE53_OFFSET UNITYSDK_OFFSET(0x182206E0)
#define CLASS_3_7133B806F008F161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18220420)
#define CLASS_3_7133B806F008F161_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18220540)
#define CLASS_3_7133B806F008F161__CCTOR_OFFSET UNITYSDK_OFFSET(0x18221600)
#define CLASS_3_7133B806F008F161__CTOR_OFFSET UNITYSDK_OFFSET(0x182203F0)

inline static constexpr unsigned int Class_3_7133B806F008F161_TypeDefinitionIndex = 52524;

class Class_3_7133B806F008F161 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_NotifySpecialEvent*>
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_IJLNNMPABLK()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7133B806F008F161_TypeDefinitionIndex)->GetStaticField(0x5D680);
	}
	::System::Boolean IKOOHIBMNFK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_NotifySpecialEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_NotifySpecialEvent*))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_3_6C730A209B06CE53(::RPG::GameCore::STSpecialEventType a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::DynamicFloat* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::STSpecialEventType, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161_METHOD_3_6C730A209B06CE53_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_40E6AFCB91524816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7133B806F008F161_METHOD_3_40E6AFCB91524816_OFFSET))(this);
	}
};
