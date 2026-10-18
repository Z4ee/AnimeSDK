#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_215.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DDF1B764466C79E6_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0xB4584A0)
#define CLASS_2_DDF1B764466C79E6__CTOR_OFFSET UNITYSDK_OFFSET(0xB458520)

inline static constexpr unsigned int Class_2_DDF1B764466C79E6_TypeDefinitionIndex = 77675;

class Class_2_DDF1B764466C79E6 : public ::Class_1_43BD383C98B4C0C5_215
{
public:
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* KLDACNEKNGF; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PIJFBMKEOIE; // 0x18
	::RPG::GameCore::ChimeraDuelCreateChimeraNode* EABKOHGCHFP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF1B764466C79E6__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_DDF1B764466C79E6_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
