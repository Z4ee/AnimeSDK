#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_986;
class Class_0_16E4307DCC419505_988;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA6A2942A1B10F0A_METHOD_1_9A06D797D4112EBF_OFFSET UNITYSDK_OFFSET(0xC316EA0)
#define CLASS_1_EA6A2942A1B10F0A__CTOR_OFFSET UNITYSDK_OFFSET(0xC316D40)

inline static constexpr unsigned int Class_1_EA6A2942A1B10F0A_TypeDefinitionIndex = 65563;

class Class_1_EA6A2942A1B10F0A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_988*>* OOPCLGFHEJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA6A2942A1B10F0A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_986*>* Method_1_9A06D797D4112EBF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_986*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_EA6A2942A1B10F0A_METHOD_1_9A06D797D4112EBF_OFFSET))(this, a1);
	}
};
