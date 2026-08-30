#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1115;
class Class_1_9CAA42EF32347EE5_4;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F8D4E2BAA9A57E44_METHOD_1_1E0EA1AC7E2D9526_OFFSET UNITYSDK_OFFSET(0xB7D61F0)
#define CLASS_1_F8D4E2BAA9A57E44_METHOD_1_496B3DEE27B86F26_OFFSET UNITYSDK_OFFSET(0xB7D61A0)
#define CLASS_1_F8D4E2BAA9A57E44_METHOD_1_6AF9E9664B4F0C5D_OFFSET UNITYSDK_OFFSET(0xB7D6140)
#define CLASS_1_F8D4E2BAA9A57E44_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB7D60F0)
#define CLASS_1_F8D4E2BAA9A57E44__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6240)

inline static constexpr unsigned int Class_1_F8D4E2BAA9A57E44_TypeDefinitionIndex = 71894;

class Class_1_F8D4E2BAA9A57E44 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D4E2BAA9A57E44__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_9CAA42EF32347EE5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_4*))((::PBYTE)hIl2Cpp + CLASS_1_F8D4E2BAA9A57E44_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1115*>* Method_1_6AF9E9664B4F0C5D(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1115*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8D4E2BAA9A57E44_METHOD_1_6AF9E9664B4F0C5D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1115*>* Method_1_496B3DEE27B86F26()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1115*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D4E2BAA9A57E44_METHOD_1_496B3DEE27B86F26_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_1_1E0EA1AC7E2D9526(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_1_F8D4E2BAA9A57E44_METHOD_1_1E0EA1AC7E2D9526_OFFSET))(this, a1);
	}
};
