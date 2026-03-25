#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ResolveDump_Tex.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class FileInfo; }

#define RPG_CUSTOMRP_RESOLVEDUMP_DUMPCPPGFXMEMORY_OFFSET UNITYSDK_OFFSET(0x16AD5DC0)
#define RPG_CUSTOMRP_RESOLVEDUMP_DUMPCSGFXMEMORY_OFFSET UNITYSDK_OFFSET(0x16AD5EC0)
#define RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_1_OFFSET UNITYSDK_OFFSET(0x16AD7260)
#define RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_OFFSET UNITYSDK_OFFSET(0x16AD5FC0)
#define RPG_CUSTOMRP_RESOLVEDUMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD7B90)
#define RPG_CUSTOMRP_RESOLVEDUMP__EXTRACTPATH_OFFSET UNITYSDK_OFFSET(0x16AD6320)
#define RPG_CUSTOMRP_RESOLVEDUMP__RESOLVE_OFFSET UNITYSDK_OFFSET(0x16AD6650)
#define RPG_CUSTOMRP_RESOLVEDUMP__SAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0x16AD7490)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ResolveDump_TypeDefinitionIndex = 29365;

	class ResolveDump : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__CsCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResolveDump_TypeDefinitionIndex)->GetStaticField(0x102D0);
		}
		static ::System::Int32* StaticGet__CppCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ResolveDump_TypeDefinitionIndex)->GetStaticField(0x102D4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__CTOR_OFFSET))(this);
		}

		static ::System::Void DumpCppGfxMemory(::System::String* folder)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_DUMPCPPGFXMEMORY_OFFSET))(folder);
		}

		static ::System::Void DumpCsGfxMemory(::System::String* folder)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_DUMPCSGFXMEMORY_OFFSET))(folder);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Resolve(::System::String* folder, ::System::Boolean saveToLocal)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_OFFSET))(folder, saveToLocal);
		}

		static ::System::Void Resolve_1(::System::String* path0, ::System::String* path1)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP_RESOLVE_1_OFFSET))(path0, path1);
		}

		static ::System::Void _ExtractPath(::Il2CppArray<::System::IO::FileInfo*>* logPaths, ::System::Int32 i, ::System::String* folder, ::System::String*& cpp, ::System::String*& cs)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::IO::FileInfo*>*, ::System::Int32, ::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__EXTRACTPATH_OFFSET))(logPaths, i, folder, cpp, cs);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* _Resolve(::System::Boolean saveToLocal, ::System::String* outputPath, ::System::String* path0, ::System::String* path1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>*(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__RESOLVE_OFFSET))(saveToLocal, outputPath, path0, path1);
		}

		static ::System::Void _SaveToLocal(::System::String* outputPath, ::System::Single totalDiff, ::System::Single totalAdd1, ::System::Single totalAdd2, ::System::Collections::Generic::List_1<::RPG::CustomRP::ResolveDump_Tex>* diffTexList, ::System::Collections::Generic::List_1<::RPG::CustomRP::ResolveDump_Tex>* addTexList1, ::System::Collections::Generic::List_1<::RPG::CustomRP::ResolveDump_Tex>* addTexList2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::RPG::CustomRP::ResolveDump_Tex>*, ::System::Collections::Generic::List_1<::RPG::CustomRP::ResolveDump_Tex>*, ::System::Collections::Generic::List_1<::RPG::CustomRP::ResolveDump_Tex>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP__SAVETOLOCAL_OFFSET))(outputPath, totalDiff, totalAdd1, totalAdd2, diffTexList, addTexList1, addTexList2);
		}
	};
}
