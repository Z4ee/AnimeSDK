#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DDF1B764466C79E6_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x9094F60)
#define CLASS_2_DDF1B764466C79E6__CTOR_OFFSET UNITYSDK_OFFSET(0x9094FE0)

inline static constexpr unsigned int Class_2_DDF1B764466C79E6_TypeDefinitionIndex = 71256;

class Class_2_DDF1B764466C79E6 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_2_1; // 0x10
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_2_0; // 0x18
	::RPG::GameCore::ChimeraDuelCreateChimeraNode* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF1B764466C79E6__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_DDF1B764466C79E6_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
