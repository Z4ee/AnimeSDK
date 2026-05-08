#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/BipedNaming_BoneSide.h"
#include "unitysdk/RootMotion/BipedNaming_BoneType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_BIPEDNAMING_EXCLUDESNAMING_OFFSET UNITYSDK_OFFSET(0x1BD10D60)
#define ROOTMOTION_BIPEDNAMING_FIRSTLETTER_OFFSET UNITYSDK_OFFSET(0x1BD10D00)
#define ROOTMOTION_BIPEDNAMING_GETBONESIDE_OFFSET UNITYSDK_OFFSET(0x1BD0FAB0)
#define ROOTMOTION_BIPEDNAMING_GETBONESOFSIDE_OFFSET UNITYSDK_OFFSET(0x1BD0F720)
#define ROOTMOTION_BIPEDNAMING_GETBONESOFTYPEANDSIDE_OFFSET UNITYSDK_OFFSET(0x1BD0FB40)
#define ROOTMOTION_BIPEDNAMING_GETBONESOFTYPE_OFFSET UNITYSDK_OFFSET(0x1BD0F2A0)
#define ROOTMOTION_BIPEDNAMING_GETBONETYPE_OFFSET UNITYSDK_OFFSET(0x1BD0F5B0)
#define ROOTMOTION_BIPEDNAMING_GETBONE_OFFSET UNITYSDK_OFFSET(0x1BD10BD0)
#define ROOTMOTION_BIPEDNAMING_GETFIRSTBONEOFTYPEANDSIDE_OFFSET UNITYSDK_OFFSET(0x1BD0FBB0)
#define ROOTMOTION_BIPEDNAMING_GETNAMINGMATCH_OFFSET UNITYSDK_OFFSET(0x1BD0FCA0)
#define ROOTMOTION_BIPEDNAMING_ISARM_OFFSET UNITYSDK_OFFSET(0x1BD10290)
#define ROOTMOTION_BIPEDNAMING_ISEYE_OFFSET UNITYSDK_OFFSET(0x1BD10680)
#define ROOTMOTION_BIPEDNAMING_ISHEAD_OFFSET UNITYSDK_OFFSET(0x1BD10140)
#define ROOTMOTION_BIPEDNAMING_ISLEFT_OFFSET UNITYSDK_OFFSET(0x1BD107D0)
#define ROOTMOTION_BIPEDNAMING_ISLEG_OFFSET UNITYSDK_OFFSET(0x1BD103E0)
#define ROOTMOTION_BIPEDNAMING_ISRIGHT_OFFSET UNITYSDK_OFFSET(0x1BD109D0)
#define ROOTMOTION_BIPEDNAMING_ISSPINE_OFFSET UNITYSDK_OFFSET(0x1BD0FFF0)
#define ROOTMOTION_BIPEDNAMING_ISTAIL_OFFSET UNITYSDK_OFFSET(0x1BD10530)
#define ROOTMOTION_BIPEDNAMING_ISTYPEEXCLUDE_OFFSET UNITYSDK_OFFSET(0x1BD10E00)
#define ROOTMOTION_BIPEDNAMING_LASTLETTERIS_OFFSET UNITYSDK_OFFSET(0x1BD10FA0)
#define ROOTMOTION_BIPEDNAMING_LASTLETTER_OFFSET UNITYSDK_OFFSET(0x1BD10CA0)
#define ROOTMOTION_BIPEDNAMING_MATCHESLASTLETTER_OFFSET UNITYSDK_OFFSET(0x1BD10E70)
#define ROOTMOTION_BIPEDNAMING_MATCHESNAMING_OFFSET UNITYSDK_OFFSET(0x1BD0FE50)
#define ROOTMOTION_BIPEDNAMING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD11000)

namespace RootMotion
{
	inline static constexpr unsigned int BipedNaming_TypeDefinitionIndex = 36524;

	class BipedNaming : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_foot()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27200);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeLeg()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27208);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeSpine()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27210);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeTail()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27218);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_hand()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27220);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExclude()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27228);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeLeft()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27230);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeEye()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27238);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_pelvis()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27240);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeArm()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27248);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeHead()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27250);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExcludeTail()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27258);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExcludeHead()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27260);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExcludeSpine()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27268);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeRight()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27270);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExcludeEye()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27278);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExcludeArm()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27280);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_typeExcludeLeg()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BipedNaming_TypeDefinitionIndex)->GetStaticField(0x27288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* GetBonesOfType(::RootMotion::BipedNaming_BoneType boneType, ::Il2CppArray<::UnityEngine::Transform*>* bones)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::RootMotion::BipedNaming_BoneType, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETBONESOFTYPE_OFFSET))(boneType, bones);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* GetBonesOfSide(::RootMotion::BipedNaming_BoneSide boneSide, ::Il2CppArray<::UnityEngine::Transform*>* bones)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::RootMotion::BipedNaming_BoneSide, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETBONESOFSIDE_OFFSET))(boneSide, bones);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* GetBonesOfTypeAndSide(::RootMotion::BipedNaming_BoneType boneType, ::RootMotion::BipedNaming_BoneSide boneSide, ::Il2CppArray<::UnityEngine::Transform*>* bones)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::RootMotion::BipedNaming_BoneType, ::RootMotion::BipedNaming_BoneSide, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETBONESOFTYPEANDSIDE_OFFSET))(boneType, boneSide, bones);
		}

		static ::UnityEngine::Transform* GetFirstBoneOfTypeAndSide(::RootMotion::BipedNaming_BoneType boneType, ::RootMotion::BipedNaming_BoneSide boneSide, ::Il2CppArray<::UnityEngine::Transform*>* bones)
		{
			return ((::UnityEngine::Transform*(*)(::RootMotion::BipedNaming_BoneType, ::RootMotion::BipedNaming_BoneSide, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETFIRSTBONEOFTYPEANDSIDE_OFFSET))(boneType, boneSide, bones);
		}

		static ::UnityEngine::Transform* GetNamingMatch(::Il2CppArray<::UnityEngine::Transform*>* transforms, ::Il2CppArray<::Il2CppArray<::System::String*>*>* namings)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::Il2CppArray<::System::String*>*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETNAMINGMATCH_OFFSET))(transforms, namings);
		}

		static ::RootMotion::BipedNaming_BoneType GetBoneType(::System::String* boneName)
		{
			return ((::RootMotion::BipedNaming_BoneType(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETBONETYPE_OFFSET))(boneName);
		}

		static ::RootMotion::BipedNaming_BoneSide GetBoneSide(::System::String* boneName)
		{
			return ((::RootMotion::BipedNaming_BoneSide(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETBONESIDE_OFFSET))(boneName);
		}

		static ::UnityEngine::Transform* GetBone(::Il2CppArray<::UnityEngine::Transform*>* transforms, ::RootMotion::BipedNaming_BoneType boneType, ::RootMotion::BipedNaming_BoneSide boneSide, ::Il2CppArray<::Il2CppArray<::System::String*>*>* namings)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::RootMotion::BipedNaming_BoneType, ::RootMotion::BipedNaming_BoneSide, ::Il2CppArray<::Il2CppArray<::System::String*>*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_GETBONE_OFFSET))(transforms, boneType, boneSide, namings);
		}

		static ::System::Boolean isLeft(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISLEFT_OFFSET))(boneName);
		}

		static ::System::Boolean isRight(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISRIGHT_OFFSET))(boneName);
		}

		static ::System::Boolean isSpine(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISSPINE_OFFSET))(boneName);
		}

		static ::System::Boolean isHead(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISHEAD_OFFSET))(boneName);
		}

		static ::System::Boolean isArm(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISARM_OFFSET))(boneName);
		}

		static ::System::Boolean isLeg(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISLEG_OFFSET))(boneName);
		}

		static ::System::Boolean isTail(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISTAIL_OFFSET))(boneName);
		}

		static ::System::Boolean isEye(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISEYE_OFFSET))(boneName);
		}

		static ::System::Boolean isTypeExclude(::System::String* boneName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_ISTYPEEXCLUDE_OFFSET))(boneName);
		}

		static ::System::Boolean matchesNaming(::System::String* boneName, ::Il2CppArray<::System::String*>* namingConvention)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_MATCHESNAMING_OFFSET))(boneName, namingConvention);
		}

		static ::System::Boolean excludesNaming(::System::String* boneName, ::Il2CppArray<::System::String*>* namingConvention)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_EXCLUDESNAMING_OFFSET))(boneName, namingConvention);
		}

		static ::System::Boolean matchesLastLetter(::System::String* boneName, ::Il2CppArray<::System::String*>* namingConvention)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_MATCHESLASTLETTER_OFFSET))(boneName, namingConvention);
		}

		static ::System::Boolean LastLetterIs(::System::String* boneName, ::System::String* letter)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_LASTLETTERIS_OFFSET))(boneName, letter);
		}

		static ::System::String* firstLetter(::System::String* boneName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_FIRSTLETTER_OFFSET))(boneName);
		}

		static ::System::String* lastLetter(::System::String* boneName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDNAMING_LASTLETTER_OFFSET))(boneName);
		}
	};
}
