#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }
namespace RPG::GameCore { class FiveDimFogOfWarConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A44BA882502087AA_GET_FACESIZE_OFFSET UNITYSDK_OFFSET(0x15B1E340)
#define CLASS_1_A44BA882502087AA_GET_FOGS_OFFSET UNITYSDK_OFFSET(0x15B1E360)
#define CLASS_1_A44BA882502087AA_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x15B1E320)
#define CLASS_1_A44BA882502087AA_GET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0x15B1E300)
#define CLASS_1_A44BA882502087AA_METHOD_1_8A5692253C0897D8_OFFSET UNITYSDK_OFFSET(0x15B1DDC0)
#define CLASS_1_A44BA882502087AA_SET_FACESIZE_OFFSET UNITYSDK_OFFSET(0x15B1E350)
#define CLASS_1_A44BA882502087AA_SET_FOGS_OFFSET UNITYSDK_OFFSET(0x15B1E370)
#define CLASS_1_A44BA882502087AA_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x15B1E330)
#define CLASS_1_A44BA882502087AA_SET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0x15B1E310)
#define CLASS_1_A44BA882502087AA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1E2C0)

inline static constexpr unsigned int Class_1_A44BA882502087AA_TypeDefinitionIndex = 71233;

class Class_1_A44BA882502087AA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* _Sections_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _Fogs_k__BackingField; // 0x18
	::Il2CppArray<::RPG::MVector2>* _SectionVertices_k__BackingField; // 0x20
	::RPG::MVector2 _FaceSize_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA__CTOR_OFFSET))(this);
	}

	static ::Class_1_A44BA882502087AA* Method_1_8A5692253C0897D8(::RPG::GameCore::FiveDimFogOfWarConfig* a1, ::RPG::MVector2 a2)
	{
		return ((::Class_1_A44BA882502087AA*(*)(::RPG::GameCore::FiveDimFogOfWarConfig*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_METHOD_1_8A5692253C0897D8_OFFSET))(a1, a2);
	}

	::Il2CppArray<::RPG::MVector2>* get_SectionVertices()
	{
		return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_GET_SECTIONVERTICES_OFFSET))(this);
	}

	::System::Void set_SectionVertices(::Il2CppArray<::RPG::MVector2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_SET_SECTIONVERTICES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* get_Sections()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_GET_SECTIONS_OFFSET))(this);
	}

	::System::Void set_Sections(::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_SET_SECTIONS_OFFSET))(this, a1);
	}

	::RPG::MVector2 get_FaceSize()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_GET_FACESIZE_OFFSET))(this);
	}

	::System::Void set_FaceSize(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_SET_FACESIZE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_Fogs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_GET_FOGS_OFFSET))(this);
	}

	::System::Void set_Fogs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A44BA882502087AA_SET_FOGS_OFFSET))(this, a1);
	}
};
