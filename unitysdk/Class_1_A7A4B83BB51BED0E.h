#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }
namespace RPG::GameCore { class FiveDimFogOfWarConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A7A4B83BB51BED0E_GET_FACESIZE_OFFSET UNITYSDK_OFFSET(0xA7B74B0)
#define CLASS_1_A7A4B83BB51BED0E_GET_FOGS_OFFSET UNITYSDK_OFFSET(0xA7B74D0)
#define CLASS_1_A7A4B83BB51BED0E_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xA7B7490)
#define CLASS_1_A7A4B83BB51BED0E_GET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0xA7B7470)
#define CLASS_1_A7A4B83BB51BED0E_METHOD_1_FE8B82EDFBB3BD3F_OFFSET UNITYSDK_OFFSET(0xA7B6ED0)
#define CLASS_1_A7A4B83BB51BED0E_SET_FACESIZE_OFFSET UNITYSDK_OFFSET(0xA7B74C0)
#define CLASS_1_A7A4B83BB51BED0E_SET_FOGS_OFFSET UNITYSDK_OFFSET(0xA7B74E0)
#define CLASS_1_A7A4B83BB51BED0E_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xA7B74A0)
#define CLASS_1_A7A4B83BB51BED0E_SET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0xA7B7480)
#define CLASS_1_A7A4B83BB51BED0E__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B7430)

inline static constexpr unsigned int Class_1_A7A4B83BB51BED0E_TypeDefinitionIndex = 68898;

class Class_1_A7A4B83BB51BED0E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* _Sections_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _Fogs_k__BackingField; // 0x18
	::Il2CppArray<::RPG::MVector2>* _SectionVertices_k__BackingField; // 0x20
	::RPG::MVector2 _FaceSize_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E__CTOR_OFFSET))(this);
	}

	static ::Class_1_A7A4B83BB51BED0E* Method_1_FE8B82EDFBB3BD3F(::RPG::GameCore::FiveDimFogOfWarConfig* a1, ::RPG::MVector2 a2)
	{
		return ((::Class_1_A7A4B83BB51BED0E*(*)(::RPG::GameCore::FiveDimFogOfWarConfig*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_METHOD_1_FE8B82EDFBB3BD3F_OFFSET))(a1, a2);
	}

	::Il2CppArray<::RPG::MVector2>* get_SectionVertices()
	{
		return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_GET_SECTIONVERTICES_OFFSET))(this);
	}

	::System::Void set_SectionVertices(::Il2CppArray<::RPG::MVector2>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_SET_SECTIONVERTICES_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* get_Sections()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_GET_SECTIONS_OFFSET))(this);
	}

	::System::Void set_Sections(::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_SET_SECTIONS_OFFSET))(this, value);
	}

	::RPG::MVector2 get_FaceSize()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_GET_FACESIZE_OFFSET))(this);
	}

	::System::Void set_FaceSize(::RPG::MVector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_SET_FACESIZE_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_Fogs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_GET_FOGS_OFFSET))(this);
	}

	::System::Void set_Fogs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A7A4B83BB51BED0E_SET_FOGS_OFFSET))(this, value);
	}
};
