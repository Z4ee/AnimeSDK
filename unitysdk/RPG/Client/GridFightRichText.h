#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_110;
class Class_1_89306F51165107EE;
class Class_1_993DBED7F998012B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x1AEAF300)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET UNITYSDK_OFFSET(0x1AEAF420)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET UNITYSDK_OFFSET(0x1AE9EDF0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET UNITYSDK_OFFSET(0x1AEAF620)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET UNITYSDK_OFFSET(0x1AE9F430)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET UNITYSDK_OFFSET(0x1AEAF540)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_7_OFFSET UNITYSDK_OFFSET(0x1AEAF6F0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_8_OFFSET UNITYSDK_OFFSET(0x1AEAF230)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_OFFSET UNITYSDK_OFFSET(0x1AEAF130)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEAF7E0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAF7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRichText_TypeDefinitionIndex = 62382;

	class GridFightRichText : public ::System::Object
	{
	public:
		static ::Class_1_993DBED7F998012B** StaticGet__Parser()
		{
			return (::Class_1_993DBED7F998012B**)Il2CppClass::FromTypeDefinitionIndex(GridFightRichText_TypeDefinitionIndex)->GetStaticField(0x2B160);
		}
		static ::Class_1_89306F51165107EE** StaticGet__Compiler()
		{
			return (::Class_1_89306F51165107EE**)Il2CppClass::FromTypeDefinitionIndex(GridFightRichText_TypeDefinitionIndex)->GetStaticField(0x2B168);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT__CCTOR_OFFSET))();
		}

		static ::System::String* Compile(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_1(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::Class_1_43BD383C98B4C0C5_110* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Class_1_43BD383C98B4C0C5_110*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_2(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_110*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_110*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_3(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::Il2CppArray<::Class_1_43BD383C98B4C0C5_110*>* a3)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::Class_1_43BD383C98B4C0C5_110*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Compile_4(::RPG::Client::TextID a1)
		{
			return ((::System::String*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET))(a1);
		}

		static ::System::String* Compile_5(::System::String* a1, ::Class_1_43BD383C98B4C0C5_110* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Class_1_43BD383C98B4C0C5_110*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_6(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_110*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_110*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_7(::System::String* a1, ::Il2CppArray<::Class_1_43BD383C98B4C0C5_110*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::Class_1_43BD383C98B4C0C5_110*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_7_OFFSET))(a1, a2);
		}

		static ::System::String* Compile_8(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_8_OFFSET))(a1);
		}
	};
}
