#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A876DD4596D1288D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB22D1A0)
#define CLASS_1_A876DD4596D1288D_METHOD_1_34A0F0635B7F1CFC_OFFSET UNITYSDK_OFFSET(0xB22D3B0)
#define CLASS_1_A876DD4596D1288D_METHOD_1_446E5881CFF1F12C_OFFSET UNITYSDK_OFFSET(0xB22D210)
#define CLASS_1_A876DD4596D1288D__CTOR_OFFSET UNITYSDK_OFFSET(0xB22D3F0)

inline static constexpr unsigned int Class_1_A876DD4596D1288D_TypeDefinitionIndex = 58454;

class Class_1_A876DD4596D1288D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A876DD4596D1288D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A876DD4596D1288D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_446E5881CFF1F12C(::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_A876DD4596D1288D_METHOD_1_446E5881CFF1F12C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* Method_1_34A0F0635B7F1CFC()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A876DD4596D1288D_METHOD_1_34A0F0635B7F1CFC_OFFSET))(this);
	}
};
