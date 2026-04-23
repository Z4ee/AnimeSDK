#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextIcons_Struct_2_126A1A9085C0C7D8.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextIcons_Class_1_DE8146FD159B95CF; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEXTICONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2CD640)
#define RPG_CLIENT_TEXTICONS___C__CLEAR_B__10_0_OFFSET UNITYSDK_OFFSET(0xB2CD690)
#define RPG_CLIENT_TEXTICONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CD670)
#define RPG_CLIENT_TEXTICONS___C__ONDISABLE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB2CD680)
#define RPG_CLIENT_TEXTICONS___C__UPDATEKEY_B__19_0_OFFSET UNITYSDK_OFFSET(0xB2CD6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons___c_TypeDefinitionIndex = 66964;

	class TextIcons___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons___c_TypeDefinitionIndex)->GetStaticField(0x34310);
		}
		static ::System::Func_2<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons___c_TypeDefinitionIndex)->GetStaticField(0x34318);
		}
		static ::RPG::Client::TextIcons___c** StaticGet___9()
		{
			return (::RPG::Client::TextIcons___c**)Il2CppClass::FromTypeDefinitionIndex(TextIcons___c_TypeDefinitionIndex)->GetStaticField(0x34320);
		}
		static ::System::Func_2<::RPG::Client::TextIcons_Class_1_DE8146FD159B95CF*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::TextIcons_Class_1_DE8146FD159B95CF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons___c_TypeDefinitionIndex)->GetStaticField(0x34328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnDisable_b__5_0(::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__ONDISABLE_B__5_0_OFFSET))(this, item);
		}

		::System::Boolean _Clear_b__10_0(::RPG::Client::TextIcons_Class_1_DE8146FD159B95CF* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_Class_1_DE8146FD159B95CF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__CLEAR_B__10_0_OFFSET))(this, item);
		}

		::System::Boolean _UpdateKey_b__19_0(::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS___C__UPDATEKEY_B__19_0_OFFSET))(this, item);
		}
	};
}
