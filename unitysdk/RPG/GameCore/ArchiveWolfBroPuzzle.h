#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_METHOD_3_0CA63096CBFE809C_OFFSET UNITYSDK_OFFSET(0x16F85180)
#define RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_METHOD_3_0FEF0F36814C832D_OFFSET UNITYSDK_OFFSET(0x16F85200)
#define RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F851D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ArchiveWolfBroPuzzle_TypeDefinitionIndex = 20170;

	class ArchiveWolfBroPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CA63096CBFE809C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ArchiveWolfBroPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ArchiveWolfBroPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_METHOD_3_0CA63096CBFE809C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FEF0F36814C832D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ArchiveWolfBroPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ArchiveWolfBroPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_METHOD_3_0FEF0F36814C832D_OFFSET))(a1, a2);
		}
	};
}
