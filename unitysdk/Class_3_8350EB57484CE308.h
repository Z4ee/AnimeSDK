#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5EB97EDC6B57E120.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_8350EB57484CE308_METHOD_3_052AFCA8DCB44DD4_OFFSET UNITYSDK_OFFSET(0xBECEF50)
#define CLASS_3_8350EB57484CE308_METHOD_3_97BB38401B7B7123_OFFSET UNITYSDK_OFFSET(0xBECF0A0)
#define CLASS_3_8350EB57484CE308_METHOD_3_F4FC9F43D94CA7C6_OFFSET UNITYSDK_OFFSET(0xBECEFD0)
#define CLASS_3_8350EB57484CE308__CTOR_OFFSET UNITYSDK_OFFSET(0xBECEED0)

inline static constexpr unsigned int Class_3_8350EB57484CE308_TypeDefinitionIndex = 77159;

class Class_3_8350EB57484CE308 : public ::Class_2_5EB97EDC6B57E120
{
public:
	::Class_1_A92BC063ED2379EB* LLGAFJEJLEA; // 0x28

	::System::Void _ctor(::Class_1_A92BC063ED2379EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308__CTOR_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_3_052AFCA8DCB44DD4()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308_METHOD_3_052AFCA8DCB44DD4_OFFSET))(this);
	}

	::RPG::GameCore::ChimeraDuelTeamType Method_3_F4FC9F43D94CA7C6()
	{
		return ((::RPG::GameCore::ChimeraDuelTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308_METHOD_3_F4FC9F43D94CA7C6_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_3_97BB38401B7B7123(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308_METHOD_3_97BB38401B7B7123_OFFSET))(this, a1);
	}
};
