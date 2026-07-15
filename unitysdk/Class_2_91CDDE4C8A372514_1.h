#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91CDDE4C8A372514_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x16396DD0)
#define CLASS_2_91CDDE4C8A372514_1_METHOD_2_BDCB80B02EC7EFF2_OFFSET UNITYSDK_OFFSET(0x16396FB0)
#define CLASS_2_91CDDE4C8A372514_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16397170)
#define CLASS_2_91CDDE4C8A372514_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16396DB0)

inline static constexpr unsigned int Class_2_91CDDE4C8A372514_1_TypeDefinitionIndex = 56529;

class Class_2_91CDDE4C8A372514_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByPropertyRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByPropertyRatio* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_1_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BDCB80B02EC7EFF2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_1_METHOD_2_BDCB80B02EC7EFF2_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_91CDDE4C8A372514_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
