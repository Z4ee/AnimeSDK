#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_1DD6AC150642D284;
class Class_1_7B005A18003A04C3;
class Class_1_C50F5982E5600913;
namespace RPG::Client { class BaseLobby; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_46C5B068E0A0D9ED_METHOD_1_0169241CF2FF5931_OFFSET UNITYSDK_OFFSET(0x179E4810)
#define CLASS_1_46C5B068E0A0D9ED_METHOD_1_04C9CA75C7CD64AE_OFFSET UNITYSDK_OFFSET(0x179E44E0)
#define CLASS_1_46C5B068E0A0D9ED_METHOD_1_4373BBE89904705E_OFFSET UNITYSDK_OFFSET(0x179E4170)
#define CLASS_1_46C5B068E0A0D9ED_METHOD_1_89BF0FC6816EE45F_OFFSET UNITYSDK_OFFSET(0x179E43A0)

inline static constexpr unsigned int Class_1_46C5B068E0A0D9ED_TypeDefinitionIndex = 65838;

class Class_1_46C5B068E0A0D9ED : public ::System::Object
{
public:
	static ::RPG::Client::BaseLobby* Method_1_4373BBE89904705E(::Enum_3_01618AD0437C8486_2 a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a3, ::System::UInt32 a4, ::Class_1_1DD6AC150642D284* a5)
	{
		return ((::RPG::Client::BaseLobby*(*)(::Enum_3_01618AD0437C8486_2, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::System::UInt32, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + CLASS_1_46C5B068E0A0D9ED_METHOD_1_4373BBE89904705E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::BaseLobby* Method_1_89BF0FC6816EE45F(::Enum_3_01618AD0437C8486_2 a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a3, ::System::UInt32 a4, ::Class_1_1DD6AC150642D284* a5)
	{
		return ((::RPG::Client::BaseLobby*(*)(::Enum_3_01618AD0437C8486_2, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::System::UInt32, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + CLASS_1_46C5B068E0A0D9ED_METHOD_1_89BF0FC6816EE45F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_1_7B005A18003A04C3* Method_1_04C9CA75C7CD64AE(::Enum_3_01618AD0437C8486_2 a1, ::System::Object* a2)
	{
		return ((::Class_1_7B005A18003A04C3*(*)(::Enum_3_01618AD0437C8486_2, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_46C5B068E0A0D9ED_METHOD_1_04C9CA75C7CD64AE_OFFSET))(a1, a2);
	}

	static ::Class_1_1DD6AC150642D284* Method_1_0169241CF2FF5931(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::Class_1_1DD6AC150642D284*(*)(::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_46C5B068E0A0D9ED_METHOD_1_0169241CF2FF5931_OFFSET))(a1);
	}
};
