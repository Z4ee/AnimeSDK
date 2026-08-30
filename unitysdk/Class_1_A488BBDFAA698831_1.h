#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_37A884EB0F1E4D5B;
class Class_1_6F4CEA512F531AE2;

#define CLASS_1_A488BBDFAA698831_1_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x1A0D0560)
#define CLASS_1_A488BBDFAA698831_1_METHOD_1_96AC08E59CFD56B6_OFFSET UNITYSDK_OFFSET(0x1A0D04D0)
#define CLASS_1_A488BBDFAA698831_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D0610)

inline static constexpr unsigned int Class_1_A488BBDFAA698831_1_TypeDefinitionIndex = 79460;

class Class_1_A488BBDFAA698831_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A488BBDFAA698831_1__CTOR_OFFSET))(this);
	}

	::Class_1_6F4CEA512F531AE2* Method_1_96AC08E59CFD56B6(::RPG::GameCore::FateRinCaseBoardTeamType a1)
	{
		return ((::Class_1_6F4CEA512F531AE2*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CLASS_1_A488BBDFAA698831_1_METHOD_1_96AC08E59CFD56B6_OFFSET))(this, a1);
	}

	static ::Class_1_6F4CEA512F531AE2* Method_1_169C9AE8F88E4F64(::Class_1_37A884EB0F1E4D5B* a1)
	{
		return ((::Class_1_6F4CEA512F531AE2*(*)(::Class_1_37A884EB0F1E4D5B*))((::PBYTE)hIl2Cpp + CLASS_1_A488BBDFAA698831_1_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}
};
