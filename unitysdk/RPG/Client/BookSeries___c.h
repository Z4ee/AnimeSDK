#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Book; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_BOOKSERIES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD93C90)
#define RPG_CLIENT_BOOKSERIES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD93CD0)
#define RPG_CLIENT_BOOKSERIES___C__GETBOOKS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BD93CE0)
#define RPG_CLIENT_BOOKSERIES___C__GET_HASAUDIOCONTENT_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BD93DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookSeries___c_TypeDefinitionIndex = 66419;

	class BookSeries___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::Book*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::Book*>**)Il2CppClass::FromTypeDefinitionIndex(BookSeries___c_TypeDefinitionIndex)->GetStaticField(0x10670);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*>, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BookSeries___c_TypeDefinitionIndex)->GetStaticField(0x10678);
		}
		static ::RPG::Client::BookSeries___c** StaticGet___9()
		{
			return (::RPG::Client::BookSeries___c**)Il2CppClass::FromTypeDefinitionIndex(BookSeries___c_TypeDefinitionIndex)->GetStaticField(0x10680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBooks_b__5_0(::RPG::Client::Book* a1, ::RPG::Client::Book* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Book*, ::RPG::Client::Book*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__GETBOOKS_B__5_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_HasAudioContent_b__53_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::Book*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKSERIES___C__GET_HASAUDIOCONTENT_B__53_0_OFFSET))(this, a1);
		}
	};
}
