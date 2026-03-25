#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_135;
class Class_1_89306F51165107EE;
class Class_1_993DBED7F998012B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x988CFE0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET UNITYSDK_OFFSET(0x988D100)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET UNITYSDK_OFFSET(0x988D300)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET UNITYSDK_OFFSET(0x9883570)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET UNITYSDK_OFFSET(0x988D220)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET UNITYSDK_OFFSET(0x988CF10)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_OFFSET UNITYSDK_OFFSET(0x988CE00)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x988D3E0)
#define RPG_CLIENT_GRIDFIGHTRICHTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x988D3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRichText_TypeDefinitionIndex = 53032;

	class GridFightRichText : public ::System::Object
	{
	public:
		static ::Class_1_89306F51165107EE** StaticGet__Compiler()
		{
			return (::Class_1_89306F51165107EE**)Il2CppClass::FromTypeDefinitionIndex(GridFightRichText_TypeDefinitionIndex)->GetStaticField(0x18B40);
		}
		static ::Class_1_993DBED7F998012B** StaticGet__Parser()
		{
			return (::Class_1_993DBED7F998012B**)Il2CppClass::FromTypeDefinitionIndex(GridFightRichText_TypeDefinitionIndex)->GetStaticField(0x18B48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT__CCTOR_OFFSET))();
		}

		static ::System::String* Compile(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_OFFSET))(id, args);
		}

		static ::System::String* Compile_1(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args, ::Class_1_43BD383C98B4C0C5_135* extraCompiler)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Class_1_43BD383C98B4C0C5_135*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_1_OFFSET))(id, args, extraCompiler);
		}

		static ::System::String* Compile_2(::RPG::Client::TextID id, ::Il2CppArray<::RPG::GameCore::FixPoint>* args, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>* extraCompilers)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_2_OFFSET))(id, args, extraCompilers);
		}

		static ::System::String* Compile_3(::RPG::Client::TextID id)
		{
			return ((::System::String*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_3_OFFSET))(id);
		}

		static ::System::String* Compile_4(::System::String* text, ::Class_1_43BD383C98B4C0C5_135* extraCompiler)
		{
			return ((::System::String*(*)(::System::String*, ::Class_1_43BD383C98B4C0C5_135*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_4_OFFSET))(text, extraCompiler);
		}

		static ::System::String* Compile_5(::System::String* text, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>* extraCompilers)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_135*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_5_OFFSET))(text, extraCompilers);
		}

		static ::System::String* Compile_6(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRICHTEXT_COMPILE_6_OFFSET))(text);
		}
	};
}
