#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_2FEB0D469BFEA77C;

#define RPG_CLIENT_PETMARBLESKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xDAE3020)
#define RPG_CLIENT_PETMARBLESKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDAE2FB0)
#define RPG_CLIENT_PETMARBLESKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAE2F60)
#define RPG_CLIENT_PETMARBLESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE2F50)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleSkill_TypeDefinitionIndex = 65835;

	class PetMarbleSkill : public ::System::Object
	{
	public:
		::Class_1_2FEB0D469BFEA77C* _PetRow; // 0x10

		::System::Void _ctor(::Class_1_2FEB0D469BFEA77C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2FEB0D469BFEA77C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_DescParams()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESKILL_GET_DESCPARAMS_OFFSET))(this);
		}
	};
}
