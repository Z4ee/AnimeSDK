#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_361;
class Class_0_16E4307DCC419505_362;
class Class_0_16E4307DCC419505_396;
class Class_1_090AB0EAA610410E;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AAF26683E4B89304_METHOD_1_17ECA815846ACA03_OFFSET UNITYSDK_OFFSET(0x13A57710)
#define CLASS_1_AAF26683E4B89304_METHOD_1_6D310BF07529E158_OFFSET UNITYSDK_OFFSET(0x13A575C0)
#define CLASS_1_AAF26683E4B89304_METHOD_1_E55DFD7421058A86_OFFSET UNITYSDK_OFFSET(0x13A57650)
#define CLASS_1_AAF26683E4B89304_METHOD_1_E872DB93CE0C0B54_OFFSET UNITYSDK_OFFSET(0x13A571F0)
#define CLASS_1_AAF26683E4B89304__CTOR_OFFSET UNITYSDK_OFFSET(0x13A57140)

inline static constexpr unsigned int Class_1_AAF26683E4B89304_TypeDefinitionIndex = 58685;

class Class_1_AAF26683E4B89304 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_360* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_396* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_360* a1, ::Class_0_16E4307DCC419505_396* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_090AB0EAA610410E* Method_1_E872DB93CE0C0B54(::Proto::DisplayAvatarDetailInfo* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_E872DB93CE0C0B54_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>* Method_1_6D310BF07529E158(::Proto::DisplayAvatarDetailInfo* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>*(*)(::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_6D310BF07529E158_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_361* Method_1_E55DFD7421058A86(::Proto::DisplayAvatarDetailInfo* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::Class_0_16E4307DCC419505_361*(*)(::Proto::DisplayAvatarDetailInfo*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_E55DFD7421058A86_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>* Method_1_17ECA815846ACA03(::Proto::DisplayAvatarDetailInfo* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_17ECA815846ACA03_OFFSET))(this, a1);
	}
};
