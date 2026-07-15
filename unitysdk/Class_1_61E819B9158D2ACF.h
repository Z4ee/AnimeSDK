#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/Struct_2_F58FBBBFAD28B36A.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }

#define CLASS_1_61E819B9158D2ACF_METHOD_1_2237E87C818A2F03_OFFSET UNITYSDK_OFFSET(0x14B4FE60)
#define CLASS_1_61E819B9158D2ACF_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x14B4F940)
#define CLASS_1_61E819B9158D2ACF_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x14B4FD40)
#define CLASS_1_61E819B9158D2ACF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14B4FFA0)
#define CLASS_1_61E819B9158D2ACF_METHOD_1_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x14B4FA70)
#define CLASS_1_61E819B9158D2ACF_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x14B4F810)
#define CLASS_1_61E819B9158D2ACF_METHOD_1_F8617711F9FCAC9C_OFFSET UNITYSDK_OFFSET(0x14B4F740)
#define CLASS_1_61E819B9158D2ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x14B4F800)

inline static constexpr unsigned int Class_1_61E819B9158D2ACF_TypeDefinitionIndex = 63424;

class Class_1_61E819B9158D2ACF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::NavMap::IMapDataSource* Field_1_1; // 0x18
	::RPG::GameCore::PropState Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::Struct_2_F58FBBBFAD28B36A Field_1_4; // 0x28
	::RPG::GameCore::CompareType Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF__CTOR_OFFSET))(this);
	}

	static ::Class_1_61E819B9158D2ACF* Method_1_F8617711F9FCAC9C(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2)
	{
		return ((::Class_1_61E819B9158D2ACF*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_F8617711F9FCAC9C_OFFSET))(a1, a2);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_1_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_7A4DA50406643EC6_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_2237E87C818A2F03(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_2237E87C818A2F03_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61E819B9158D2ACF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
