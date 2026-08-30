#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A331969222E4A3BB;
class Class_1_F9FBCC956DFCF137_27;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8AC098ED72D7F59_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16308700)
#define CLASS_1_C8AC098ED72D7F59_TICK_OFFSET UNITYSDK_OFFSET(0x16309050)
#define CLASS_1_C8AC098ED72D7F59__CTOR_OFFSET UNITYSDK_OFFSET(0x16308410)

inline static constexpr unsigned int Class_1_C8AC098ED72D7F59_TypeDefinitionIndex = 77193;

class Class_1_C8AC098ED72D7F59 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A331969222E4A3BB*>* JCDJIOEPELJ; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* FAGBDHNDLBO; // 0x18
	::System::Action* LGAOOKPFIMF; // 0x20

	::System::Void _ctor(::Class_2_FB9CF047C8AEAA83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_C8AC098ED72D7F59__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C8AC098ED72D7F59_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8AC098ED72D7F59_TICK_OFFSET))(this, a1);
	}
};
