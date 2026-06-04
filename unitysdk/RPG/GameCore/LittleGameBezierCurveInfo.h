#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelCurveInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelBaseCurvePointInfo; }
namespace RPG::GameCore { class LevelCurvePointInfo; }

#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_0B5A6A046CE77CA9_OFFSET UNITYSDK_OFFSET(0x19897FC0)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_8B071BD4E0283A69_OFFSET UNITYSDK_OFFSET(0x19898130)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x19898120)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_F76D7505EE61B432_OFFSET UNITYSDK_OFFSET(0x19898000)
#define RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19897FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBezierCurveInfo_TypeDefinitionIndex = 17938;

	class LittleGameBezierCurveInfo : public ::RPG::GameCore::LittleGameLevelCurveInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelCurvePointInfo*>* PointList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B5A6A046CE77CA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBezierCurveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBezierCurveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_0B5A6A046CE77CA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F76D7505EE61B432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBezierCurveInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBezierCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_F76D7505EE61B432_OFFSET))(a1, a2);
		}

		::System::UInt32 Method_3_D978819B0A4871A0()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_D978819B0A4871A0_OFFSET))(this);
		}

		::RPG::GameCore::LevelBaseCurvePointInfo* Method_3_8B071BD4E0283A69(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelBaseCurvePointInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBEZIERCURVEINFO_METHOD_3_8B071BD4E0283A69_OFFSET))(this, a1);
		}
	};
}
