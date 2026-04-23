#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_C0BD047803C8E44F;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B00670)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS9_0__STARTMATCH_B__0_OFFSET UNITYSDK_OFFSET(0x10B04270)

inline static constexpr unsigned int Class_2_FD1781FBF85A46E5___c__DisplayClass9_0_TypeDefinitionIndex = 62953;

class Class_2_FD1781FBF85A46E5___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_C0BD047803C8E44F* session; // 0x10
	::Class_1_0C36FD2A7876DF8E* extInfo; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _StartMatch_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS9_0__STARTMATCH_B__0_OFFSET))(this);
	}
};
