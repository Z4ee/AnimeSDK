#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_346F0265C9AE3301;
class Class_1_811C21B122C8082C;
class Class_1_B8494E43D47731C4;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_81B09A766DFEB3DC_METHOD_1_1372C131A7409223_OFFSET UNITYSDK_OFFSET(0x105AE2F0)
#define CLASS_1_81B09A766DFEB3DC_METHOD_1_4ACBFE17F1B02888_OFFSET UNITYSDK_OFFSET(0x105ADBE0)
#define CLASS_1_81B09A766DFEB3DC__CTOR_OFFSET UNITYSDK_OFFSET(0x105AE990)

inline static constexpr unsigned int Class_1_81B09A766DFEB3DC_TypeDefinitionIndex = 63937;

class Class_1_81B09A766DFEB3DC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B09A766DFEB3DC__CTOR_OFFSET))(this);
	}

	::Class_1_346F0265C9AE3301* Method_1_4ACBFE17F1B02888(::Class_1_B8494E43D47731C4* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::Class_1_346F0265C9AE3301*(*)(::PVOID, ::Class_1_B8494E43D47731C4*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_81B09A766DFEB3DC_METHOD_1_4ACBFE17F1B02888_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* Method_1_1372C131A7409223(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a3)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_81B09A766DFEB3DC_METHOD_1_1372C131A7409223_OFFSET))(this, a1, a2, a3);
	}
};
