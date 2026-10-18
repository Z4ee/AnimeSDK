#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_215;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_27;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DE456F09ED8F4AC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB6CFCC0)
#define CLASS_1_3DE456F09ED8F4AC_METHOD_1_39A4542C0015831D_OFFSET UNITYSDK_OFFSET(0xB6D0050)
#define CLASS_1_3DE456F09ED8F4AC_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB6D0010)
#define CLASS_1_3DE456F09ED8F4AC_TICK_OFFSET UNITYSDK_OFFSET(0xB6D0100)
#define CLASS_1_3DE456F09ED8F4AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CFCB0)

inline static constexpr unsigned int Class_1_3DE456F09ED8F4AC_TypeDefinitionIndex = 77655;

class Class_1_3DE456F09ED8F4AC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>* OJFECHILFHG; // 0x10
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* PFHKDKKPBMF; // 0x18
	::Class_1_E518B582305CCAFF* HFOFIODMFGB; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_1_3DE456F09ED8F4AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3DE456F09ED8F4AC_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Class_1_E518B582305CCAFF* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_E518B582305CCAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE456F09ED8F4AC_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_39A4542C0015831D(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DE456F09ED8F4AC_METHOD_1_39A4542C0015831D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3DE456F09ED8F4AC_TICK_OFFSET))(this, a1);
	}
};
