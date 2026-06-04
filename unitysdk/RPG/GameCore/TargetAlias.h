#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_GAMECORE_TARGETALIAS_METHOD_4_2EA38A17192687F2_OFFSET UNITYSDK_OFFSET(0x19CF2AF0)
#define RPG_GAMECORE_TARGETALIAS_METHOD_4_3CF40893AD427598_OFFSET UNITYSDK_OFFSET(0x19CF2BB0)
#define RPG_GAMECORE_TARGETALIAS_METHOD_4_4729EFD79E74B779_OFFSET UNITYSDK_OFFSET(0x19CF2810)
#define RPG_GAMECORE_TARGETALIAS_METHOD_4_5BE47ACDB117F03F_OFFSET UNITYSDK_OFFSET(0x19CF2670)
#define RPG_GAMECORE_TARGETALIAS_METHOD_4_5BFA660BA627DAB2_OFFSET UNITYSDK_OFFSET(0x19CF2950)
#define RPG_GAMECORE_TARGETALIAS_METHOD_4_8B771D0A92606CC4_OFFSET UNITYSDK_OFFSET(0x19CD82B0)
#define RPG_GAMECORE_TARGETALIAS_METHOD_4_9A2B1FB3D0440138_OFFSET UNITYSDK_OFFSET(0x19CF28B0)
#define RPG_GAMECORE_TARGETALIAS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CF2AB0)
#define RPG_GAMECORE_TARGETALIAS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CF2CA0)
#define RPG_GAMECORE_TARGETALIAS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CF2A50)
#define RPG_GAMECORE_TARGETALIAS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF27C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetAlias_TypeDefinitionIndex = 22442;

	class TargetAlias : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__PureAliasRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(TargetAlias_TypeDefinitionIndex)->GetStaticField(0x50650);
		}
		static ::RPG::GameCore::TargetAlias** StaticGet_Default()
		{
			return (::RPG::GameCore::TargetAlias**)Il2CppClass::FromTypeDefinitionIndex(TargetAlias_TypeDefinitionIndex)->GetStaticField(0x50658);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetAlias*>** StaticGet_AliasNameTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetAlias*>**)Il2CppClass::FromTypeDefinitionIndex(TargetAlias_TypeDefinitionIndex)->GetStaticField(0x50660);
		}
		::System::String* Alias; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS__CCTOR_OFFSET))();
		}

		static ::System::Void Method_4_5BE47ACDB117F03F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetAlias*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetAlias*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_5BE47ACDB117F03F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4729EFD79E74B779(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_4729EFD79E74B779_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A2B1FB3D0440138(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_9A2B1FB3D0440138_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BFA660BA627DAB2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_5BFA660BA627DAB2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::TargetAlias* Method_4_8B771D0A92606CC4(::System::String* a1)
		{
			return ((::RPG::GameCore::TargetAlias*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_8B771D0A92606CC4_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean Method_4_2EA38A17192687F2(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_2EA38A17192687F2_OFFSET))(a1);
		}

		static ::RPG::GameCore::TargetAlias* Method_4_3CF40893AD427598(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::RPG::GameCore::TargetAlias*(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_METHOD_4_3CF40893AD427598_OFFSET))(a1);
		}
	};
}
