#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_874;
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_231992095CD5557B_METHOD_1_77C065CF5012A3F2_OFFSET UNITYSDK_OFFSET(0xB9E4BC0)

inline static constexpr unsigned int Class_1_231992095CD5557B_TypeDefinitionIndex = 62882;

class Class_1_231992095CD5557B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* Method_1_77C065CF5012A3F2(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_874*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_874*>*))((::PBYTE)hIl2Cpp + CLASS_1_231992095CD5557B_METHOD_1_77C065CF5012A3F2_OFFSET))(a1);
	}
};
